#! /bin/bash -f

# 导入当前目录下的anaroot
# ANAROOT_SETUP - Modified for project-level use
# This script assumes it is executed from the root directory of your ANAROOT project.
# It no longer prompts for a user name or creates a user directory.

ROOT_DIR=/home/tbt/Software/root

# export TARTSYS=/home/tbt/Software/anaroot/install
# export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:$TARTSYS/lib:/home/tbt/Software/root/lib:$(pwd)/src/lib

# Source the ROOT environment
# This part assumes ROOT is installed at the specified path.
cd $ROOT_DIR
source ./bin/thisroot.sh
cd -


# Set the ANAROOT_WORK directory to the current working directory
# The script now works directly within the project where it is located.
ANAROOT_WORK=$(pwd)

# Set the ANAUSER variable to the current system user
# This simplifies the setup process and removes the need for user input.
ANAUSER=$(whoami)

# Check if the required 'src' directory exists within the current working directory
# If not, it suggests the user should create it, as the script no longer handles this.
if [ ! -d $ANAROOT_WORK/src ]; then
    echo " "
    echo " == WARNING: The 'src' directory was not found in your project. =="
    echo " Please make sure your project structure is correct."
    echo " "
fi

# Export environment variables
export TARTSYS=$ANAROOT_WORK/src

export LD_LIBRARY_PATH=$TARTSYS/lib:/usr/local/Trolltech/Qt-4.8.0/lib:/opt/qt/qwt-5.2/lib/:$LD_LIBRARY_PATH
export PATH=$ANAROOT_WORK/bin:$TARTSYS/bin:/usr/local/Trolltech/Qt-4.8.0/bin:$PATH
export PYTHONPATH=$TARTSYS/bin:$PATH
export ANAUSER=$ANAUSER
export PS1="[\u\[\e[1m\]/\$ANAUSER\[\e[0m\]@\h \W]\$ "

# export ROOT_INCLUDE_PATH=$TARTSYS/include:$ROOT_INCLUDE_PATH
# export ROOT_INCLUDE_PATH=$ANAROOT_WORK/src/include:$ROOT_INCLUDE_PATH # 这个路径似乎不对

# Define aliases
export SAMURAI_MULTIDIM_FILE_RIG="db/samurai_fun_rig.C"
export SAMURAI_MULTIDIM_FILE_LEN="db/samurai_fun_len.C"

alias acd="cd $ANAROOT_WORK"
alias findmyroot="findmyroot.pl"
alias killmyroot="findmyroot.pl -k"

if type -t mycmd &>/dev/null; then
    alias root="myroot" 
    alias emacs="mycmd emacs " 
    alias make="mycmd make " 
    alias vi="mycmd vi " 
    alias nano="mycmd nano " 
    alias vim="mycmd vim " 
fi

unalias whoami &> /dev/null
alias whoami="echo `whoami`' (anauser:'$ANAUSER')'"

# Print a summary of the setup
echo ""
echo " Set ANAROOT_WORK = $ANAROOT_WORK"
echo " Set ANAUSER      = $ANAUSER"
echo " Set TARTSYS      = $TARTSYS"
echo " Set acd          = cd $ANAROOT_WORK"
echo ' '
echo ' Start ANAROOT'
echo ' '

# Unset temporary variables for cleanup
unset ROOT_DIR

# Change to the project's root directory (this is a good practice, though already there)
acd
