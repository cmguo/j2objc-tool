
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
SOURCE_LINK=

while [[ $1 =~ ^-.+ ]]
do
  case $1 in
    -u)
      FORCE_UPDATE=true
      ;;
    -sl)
      SOURCE_LINK=true
      ;;
    *)
      if [ $1 != -h ]
      then
        echo $0: unknown option $1 !!
      fi
      echo Usage $0 [flags...] [Scheme]
      echo " -u:" Force update Pods in ThirdParty ...
      echo " -sl:" Symbol link source directory for debug
      exit 0
      ;;
  esac
  shift
done

DEPENDS=`${J2OBJC_HOME}/tools/pods.sh depends`
for d in $DEPENDS
do
  if [[ $d =~ \.\./ThirdPartyiOS ]]
  then
    DEPEND_THIRDPARTIES="$DEPEND_THIRDPARTIES ${d#*ThirdPartyiOS/}"
  else
    if [ ! -d $d/.git ]
    then
      echo "Depends $d not exists, clone it first, and checkout to branch publish/xxx"
      exit 1
    else
      DEPEND_MOUDLES="$DEPEND_MOUDLES $d"
    fi
  fi
done

set -x

if [ -z $FORCE_UPDATE ]
then
  ${J2OBJC_HOME}/tools/thirdparty.sh prepare ${DEPEND_THIRDPARTIES}
else
  ${J2OBJC_HOME}/tools/thirdparty.sh prepare
  ${J2OBJC_HOME}/tools/thirdparty.sh update ${DEPEND_THIRDPARTIES}
  for d in $DEPEND_MOUDLES
  do
    git -C $d pull --rebase
    echo "--------------------------- $d ---------------------------"
    git -C $d log -1
    echo "--------------------------- $d ---------------------------"
    echo
  done
  rm -f j2objc-2.7
  rm -f jdk
  rm -rf ThirdParty/classes
  # rm -rf */Pods
fi

if [ ! -z $SOURCE_LINK ]
then
  
  for m in $DEPENDS
  do
    if [ -f $m/Frameworks/BUILD_PATH ]
    then
      BUILD_PATH=`cat $m/Frameworks/BUILD_PATH`
      if [ ! -d $BUILD_PATH ]
      then
        sudo mkdir -p $(dirname $BUILD_PATH)
        sudo rm -f $BUILD_PATH
        sudo ln -s $(pwd)/$m $BUILD_PATH
      fi
    fi
  done

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

${J2OBJC_HOME}/tools/pods.sh install

if [ -f build.gradle ]
then

  for i in */*.xcodeproj
  do
    cd $(dirname $i)
    ${J2OBJC_HOME}/tools/j2objc_proj.rb
    cd ..
  done

fi
