#!/bin/bash

set -e
set -x

if [ -z $J2OBJC_HOME ]
then
  echo J2OBJC_HOME not config!!
  exit 1
fi

if [ -z $JAVA_HOME ]
then
  echo JAVA_HOME not config!!
  exit 1
fi

if [ ! -f $J2OBJC_HOME/j2objc ]
then
  echo "J2OBJC_HOME is not correctly defined, currently set to '${J2OBJC_HOME}'"
  exit 1
fi

if [ ! -f /usr/local/bin/gawk ]
then
  echo "gawk not installed, install with 'brew install gawk'"
  exit
fi
  
rm -f j2objc-2.7
ln -sf $J2OBJC_HOME j2objc-2.7

rm -f jdk
ln -sf $JAVA_HOME jdk

if [ -d ThirdParty -a ! -d ThirdParty/classes ]
then
  cd ThirdParty/sources
  ./source.sh
  cd ../..
fi

trap 'rm -rf Pods' ERR
for i in */Podfile
do
  i=$(dirname $i)
  if [ ! -d $i/Pods ]
  then
    cd $i
    pod install
    cd ..
  fi
done
trap '' ERR

for i in */*.xcodeproj
do
  cd $(dirname $i)
  ${J2OBJC_HOME}/tools/j2objc_proj.rb
  cd ..
done
