#!/bin/bash

# set -x
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
  rm -f j2objc-2.7
  ln -s $J2OBJC_HOME j2objc-2.7
 
  # goto update
  UPDATE=true

elif [ "$1" == "update" ]
then

  shift
  cd ThirdPartyiOS
  git pull --rebase

  # goto update
  UPDATE=true

elif [ "$1" == "publish" ]
then

  shift
  cd ThirdPartyiOS

  M=$1/$VERSION
  if ! git submodule init $M
  then
    git submodule add -b publish/$VERSION $ORIGIN $M
  fi
  git submodule update --remote $M
  git add -u $M
  git commit -m "Update $1($VERSION) to $2"
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

# update

if [ "$UPDATE" == "true" ]
then
  
  for m in $*
  do
    if [ -d $m -a ! -h $m ]
    then 
      MODULES="$MODULES $m"
    fi
  done

  if [ ! -z "$MODULES" ]
  then
    git submodule init $MODULES
  fi
  git submodule update

  for m in $MODULES
  do
    if [ -f $m/.git ]
    then
      echo "--------------------------- $m ---------------------------"
      git -C $m log -1
      echo "--------------------------- $m ---------------------------"
      echo
    fi
  done
fi
