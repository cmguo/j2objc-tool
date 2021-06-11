#!/bin/bash -x

TOOLS=$(dirname $0)

CLASS_PATH=$J2OBJC_HOME/lib/j2objc_annotations.jar
SOURCE_PATH=${TOOLS}/../sources
CLASS_OUTPUT_DIR=${TOOLS}/../classes
OBJC_OUTPUT_DIR=${TOOLS}/../objc
REFLECTION="--reflection:none --strip-reflection"
ARC=
FLAGS=
PREFIX=
PREFIXES=
DEAD_CODE_REPORT=
EXTERNAL_ANNOTATION_FILE=

complete_path()
{
  if [[ $1 =~ ^/ ]]
  then
    echo $1
  else
    echo $2/$1
  fi
}

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -reflect)
      REFLECTION=
      ;;
    -noarc)
      ARC=
      ;;
    -arc)
      ARC=-use-arc
      ;;
    -d)
      shift
      CLASS_OUTPUT_DIR="$1/classes"
      OBJC_OUTPUT_DIR="$1/objc"
      ;;
    -g)
      FLAGS="${FLAGS} -g"
      ;;
    -cp)
      shift
      CLASS_PATH="${CLASS_PATH}:$(complete_path $1 $J2OBJC_HOME/lib)"
      ;;
    --classpath)
      shift
      CLASS_PATH="${CLASS_PATH}:$(complete_path $1 $J2OBJC_HOME/lib)"
      ;;
    --prefix)
      shift
      PREFIX="$PREFIX --prefix $1"
      ;;
    --prefixes)
      shift
      PREFIXES="--prefixes $1"
      ;;
    --external-annotation-file)
      shift
      EXTERNAL_ANNOTATION_FILE="-external-annotation-file $1"
      ;;
    --dead-code-report)
      shift
      DEAD_CODE_REPORT="--dead-code-report $1"
      ;;
    *)
      echo unknown option $1
      exit 1
      ;;
  esac
  shift
done

javac \
	-classpath "${CLASS_PATH}" \
        -sourcepath "${SOURCE_PATH}" \
	-d "${CLASS_OUTPUT_DIR}" \
	"$*"

#jar --create --file classes.jar -C classes/ .
#java -jar proguard.jar @usage.pg > deadcode.txt
#cycle_finder -w whitelist -classpath classes/ -s gson.txt > gsonleak.txt

${TOOLS}/../j2objc \
	-classpath "${CLASS_PATH}" \
        -sourcepath "${SOURCE_PATH}" \
	-d "${OBJC_OUTPUT_DIR}" \
	--swift-friendly \
	-encoding UTF-8 \
	$EXTERNAL_ANNOTATION_FILE \
        $DEAD_CODE_REPORT \
        $PREFIX \
        $PREFIXES \
        $REFLECTION \
	$ARC \
	$FLAGS \
	"$*"

