#!/bin/bash

set -x
set -e

SYNC=

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -s)
      SYNC=true
      ;;
    *)
      if [ $1 != -h ]
      then
        echo $0: unknown option $1 !!
      fi
      echo Usage $0 [flags...]
      echo " -s:" Sync to ThirdPartyiOS
      exit 0
      ;;
  esac
  shift
done

if [ ! -d Frameworks ]
then
  echo Directory "'Frameworks'" not exists
  exit 1
fi

V=`grep ".version " $1.podspec | cut -d "'" -f 2`
if [[ $V =~ "\"" ]]
then
  V=`echo $V  | cut -d '"' -f 2`
fi

trap 'git rm -r --quiet --cached Frameworks' EXIT

REV=`git log -1 --pretty=format:"%h %ad %s [%an]" --date=short`

git add -f Frameworks
TREE=$(git write-tree)
COMMIT=$(git commit-tree $TREE -m "build with $REV, publish $V")
ORIGIN=`git remote get-url origin`
if [[ $ORIGIN =~ ^http ]]
then
  ORIGIN=git@${ORIGIN#*@}
  ORIGIN=${ORIGIN/\//:}
fi
git push -f $ORIGIN $COMMIT:refs/tags/$V

if [ ! -z $SYNC ]
then
  # update to reduce conflict
  $(dirname $0)/thirdparty.sh update ${PUBLISH_NAME-$1}
  git push -f $ORIGIN $COMMIT:refs/heads/publish/$V
  export ORIGIN=${ORIGIN}
  export VERSION=${V}
  $(dirname $0)/thirdparty.sh publish ${PUBLISH_NAME-$1} "$REV"
fi
