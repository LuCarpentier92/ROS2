#! /bin/bash

# -----------------------------------------------------------------------------
# Update /home/compile_flags.txt file if new include folders are found in
# /home/user, and restart clangd.
#
# That file is generated automatically in the xterm container by a process
# also called ide_autocompleation.sh when the content of ~/catkin_ws/src changes
# -----------------------------------------------------------------------------

FILE_TEMPLATE=/home/compile_flags_template.txt
MOST_RECENT=/home/compile_flags_updated.txt
LAST_AUTOCOMPLETION=/tmp/autocompletion.txt
UPDATED_AUTOCOMPLETION='/home/autocompletion.txt'
COMPILE_FLAGS=/home/compile_flags.txt
color_cyan='\e[36m'
color_reset='\033[0m'
date_format='[%Y-%m-%d %T]'
function log_cyan {
    echo -e "${color_cyan}$(date +"${date_format}") ${@} ${color_reset}";
}

function create_initial_compile_flags {
    cp -fv "${FILE_TEMPLATE}" "${COMPILE_FLAGS}"
    touch ${LAST_AUTOCOMPLETION}
}

function generate_updated_file {
    # ----------------------------------------------------
    # Generate an updated 'compile_flags_updated.txt' file with 'include'
    # folders found in /home/user
    # ----------------------------------------------------
    cp -fv "${FILE_TEMPLATE}" "${MOST_RECENT}"
    for folder in $(find /home/user -type d -name include); do
        echo "-I${folder}" | tee --append "${MOST_RECENT}" &>/dev/null
    done
}

function restart_clangd_if_needed {
    # -------------------------------------------------------------------------
    # Check whether compile_flags.txt is different from compile_flags_updated.txt
    # If so, update compile_flags.txt and restart clangd
    #   clangd is responsible for auto completion in the IDE
    # -------------------------------------------------------------------------
    has_changed=$(cmp --silent ${COMPILE_FLAGS} ${MOST_RECENT} || echo true)

    if [[ ${has_changed} = "true" ]]; then
            log_cyan 'Restarting clangd'
            cp -v ${MOST_RECENT} ${COMPILE_FLAGS}
            set -x; kill $(pidof clangd); set +x;
    else
        log_cyan 'No need to restart clangd'
    fi
}

function main {

    create_initial_compile_flags

    count=1
    while true; do


        if [[ $(($count % 30)) == 0 ]]; then
            # ----------------
            # Every 30 seconds
            # ----------------
            generate_updated_file
            restart_clangd_if_needed
            count=0
        else
            # ----------------------------------------------
            # Every second, check if ROS_DISTRO has changed.
            # If so, update links, for autocompletion
            # ----------------------------------------------
            has_changed=$(cmp --silent ${LAST_AUTOCOMPLETION} ${UPDATED_AUTOCOMPLETION} || echo true)
            if [[ ${has_changed} = "true" ]]; then
                log_cyan "Recreating links for autocompletion"

                cp -v ${UPDATED_AUTOCOMPLETION} ${LAST_AUTOCOMPLETION}

                cd /opt/ros
                # ---------------------------------------------
                # 'Removing old links'. Renaming 'noetic' to '__noetic'.
                # If we don't do this, the IDE keeps std_msgs/String.h open
                # from the last session, for example.
                # ------------------------------------------------------------
                for distro in $(ls | grep '^[a-z]'); do
                    sudo mv -v "${distro}" "__${distro}"
                done

                # -----------------------------------------------------
                # Creating new links. Renaming '__humble' to 'humble',
                # for example, so that clangd and python can find them.
                # -----------------------------------------------------
                for distro in $(cat ${UPDATED_AUTOCOMPLETION}); do
                    sudo mv -v "__${distro}" "${distro}"
                done

                log_cyan 'Restarting clangd and pylance'
                pylance_pid=$(ps faux | grep vscode-pylance| grep -v grep | awk '{print $2}')
                set -x; kill $(pidof clangd); kill -9 ${pylance_pid}; set +x;
            fi
        fi

        sleep 1
        count=$(($count + 1))
    done

}

main