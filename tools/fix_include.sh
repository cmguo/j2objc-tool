#!/bin/sh

set -x
set -e

TEMP=${DERIVED_FILE_DIR-.}

if [ "$1" == "-s" ]
then
  SELF=$2
  shift 2
fi

DST=$1
shift

find $DST -name \*.h > $TEMP/DST.list
if [ "$FIX_INCLUDE_NO_SOURCE" != "true" ]
then
  find $DST -name \*.m >> $TEMP/DST.list
fi

if [ ! -z $SELF ]
then
  cat $TEMP/DST.list | awk "{ sub(\"$DST/\", \"\", \$0); print \$0 }" > $TEMP/$SELF.f
  FS=$TEMP/$SELF.f
  declare $SELF=$TEMP/$SELF.f
fi

for i in $*
do
  if [[ $i =~ ^[A-Za-z]+: ]]
  then
    F=${i%:*}
    i=${i#*:}
    if [ -z ${!F} ]; then rm -f $TEMP/$F.f; fi
    find $i -name \*.h | awk "{ sub(\"$i/\", \"\", \$0); print \$0 }" >> $TEMP/$F.f
  elif [[ $i =~ ^[A-Za-z]+= ]]
  then
    F=${i%=*}
    i=${i#*=}
    if [ -z ${!F} ]; then rm -f $TEMP/$F.f; fi
    cat $i >> $TEMP/$F.f
  else
    F=${i##*/}
    F=${F%.framework}
    if [ ! -f $TEMP/$F.f ]
    then
      find $i/Headers -name \*.h | awk "{ sub(\"$i/Headers/\", \"\", \$0); print \$0 }" > $TEMP/$F.f
    fi
  fi
  if [ -z ${!F} ]
  then
    FS="$FS $TEMP/$F.f"
    declare $F=$TEMP/$F.f
  fi
done 

awk -F ' ' -f $(dirname $0)/fix_include.awk $FS $(<$TEMP/DST.list)

rm -f $FS
rm -f $TEMP/DST.list
