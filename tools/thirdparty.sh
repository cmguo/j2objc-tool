#!/bin/bash

set -x
set -e

cd ..

if [ "$1" == "prepare" ]
then

  if [ -d ThirdPartyiOS ]
  then
    exit 0
  fi

  shift
  git clone -b develop --depth 1 git@gitlab.xiaoheiban.cn:xhb_base/thirdpartyios.git ThirdPartyiOS
  cd ThirdPartyiOS
  rm -f LogicBase/j2objc-2.7
  ln -s $J2OBJC_HOME LogicBase/j2objc-2.7
  if [ ! -z $* ]
  then
    git submodule init $*
  fi

elif [ "$1" == "update" ]
then

  shift
  cd ThirdPartyiOS
  git pull --rebase
  if [ ! -z $* ]
  then
    git submodule init $*
  fi
  git submodule update

elif [ "$1" == "publish" ]
then

  shift
  cd ThirdPartyiOS
  git submodule update --remote
  git add -u $1
  git commit -m "Update $1" 

else

  echo unkown command $1
  exit 1

fi
