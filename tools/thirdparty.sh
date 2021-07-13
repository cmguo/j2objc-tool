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
  if [ ! -z "$*" ]
  then
    git submodule init $*
  fi
  git submodule update

  if [ -e LogicBase/.git ]
  then
    rm -f LogicBase/j2objc-2.7
    ln -s $J2OBJC_HOME LogicBase/j2objc-2.7
  fi

elif [ "$1" == "update" ]
then

  shift
  cd ThirdPartyiOS
  git pull --rebase
  if [ ! -z "$*" ]
  then
    git submodule init $*
  fi
  git submodule update
  for m in $*
  do
    git -C $m log -1
  done

elif [ "$1" == "publish" ]
then

  shift

  if [ ! git submodule init $1 ]
  then
    git submodule add -b publish/$VERSION $ORIGIN $1
  fi
  cd ThirdPartyiOS
  git submodule update --remote $1
  git add -u $1
  git commit -m "Update $1 to $2"
  git pull --rebase
  git push

elif [ "$1" == "mktag" ]
then

  shift
  TAG=$1
  shift

  cd ThirdPartyiOS
  git push -f origin HEAD:refs/tags/$TAG
  for m in $*
  do
    git -C $m push -f origin HEAD:refs/tags/$TAG
  done

else

  echo unkown command $1
  exit 1

fi
