#!/bin/bash

set -e

POD_FILES=`find . -maxdepth 2 -name Podfile`

if [ "$1" == "depends" ]
then

  $(dirname $0)/pods_depends.awk $POD_FILES | grep "\.\." | sort -u

elif [ "$1" == "install" ]
then

  trap 'rm -rf Pods' ERR
  for i in $POD_FILES
  do
    i=$(dirname $i)
    cd $i
    pod install
    cd -
  done
  trap '' ERR

fi
