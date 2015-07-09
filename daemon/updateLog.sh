#!/bin/bash

#log=grep install/upgrade /var/log/dpkg.log
#echo $log

function apt-history(){
  case "$1" in
    install)
      cat /var/log/dpkg.log | grep 'install '
      ;;
    upgrade|remove)
      cat /var/log/dpkg.log | grep $1
      ;;
    rollback)
      cat /var/log/dpkg.log | grep upgrade | \
          grep "$2" -A10000000 | \
          grep "$3" -B10000000 | \
          awk '{print $4"="$5}'
      ;;
    *)
      cat /var/log/dpkg.log
      ;;
  esac
}

apt-history > data/log