#!/bin/bash

set -x
set -e

if [ -z $J2OBJC_HOME ]
then
  echo J2OBJC_HOME not config!!
  exit 1
fi

if [ ! -f $J2OBJC_HOME/j2objc ]
then
  echo "J2OBJC_HOME is not correctly defined, currently set to '${J2OBJC_HOME}'"
  exit 1
fi

cd ..

if [ ! -d ThirdPartyiOS ]
then
  git clone -b develop git@gitlab.xiaoheiban.cn:xhb_base/thirdpartyios.git ThirdPartyiOS
  cd ThirdPartyiOS
  rm -f LogicBase/j2objc-2.7
  ln -s $J2OBJC_HOME LogicBase/j2objc-2.7
else
  cd ThirdPartyiOS
  git pull --rebase
fi

if [ ! -z $DEPEND_THIRDPARTIES ]
then
  git submodule init $*
fi
git submodule update
