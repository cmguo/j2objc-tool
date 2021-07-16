#!/bin/bash

set -e

if [ -z $J2OBJC_HOME ]
then
  echo J2OBJC_HOME not config!!
  exit 1
fi

if [ -f build.gradle ]
then

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

fi

FORCE_UPDATE= 

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -u)
      FORCE_UPDATE=true
      ;;
    *)
      if [ $1 != -h ]
      then
        echo $0: unknown option $1 !!
      fi
      echo Usage $0 [flags...] [Scheme]
      echo " -u:" Force update ThirdParty ...
      exit 0
      ;;
  esac
  shift
done

set -x

$(dirname $0)/thirdparty.sh prepare ${DEPEND_THIRDPARTIES}

if [ ! -z $FORCE_UPDATE ]
then
  $(dirname $0)/thirdparty.sh update ${DEPEND_THIRDPARTIES}
  rm -f j2objc-2.7
  rm -f jdk
  rm -rf ThirdParty/classes
  # rm -rf */Pods
fi

if [ -f build.gradle ]
then

  if [ ! -e j2objc-2.7 ]
  then
    ln -sf $J2OBJC_HOME j2objc-2.7
  fi
  
  if [ ! -e jdk ]
  then
    ln -sf $JAVA_HOME jdk
  fi
  
  if [ -d ThirdParty -a ! -d ThirdParty/classes ]
  then
    cd ThirdParty/sources
    ./source.sh
    cd ../..
  fi

fi

trap 'rm -rf Pods' ERR
for i in `find . -name Podfile`
do
  i=$(dirname $i)
  cd $i
  pod install
  cd -
done
trap '' ERR

if [ -f build.gradle ]
then

  for i in */*.xcodeproj
  do
    cd $(dirname $i)
    ${J2OBJC_HOME}/tools/j2objc_proj.rb
    cd ..
  done

fi
