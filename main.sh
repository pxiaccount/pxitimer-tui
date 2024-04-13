#!/bin/bash

clear
echo "You can config more in ./custom folder"
config_time=`cat ./custom/time.txt`
if [ "$config_time" == "minutes" ]; then
    echo "Please enter a time for timer please : (minutes)"
    read time
    echo $time >> time_minutes.txt
elif [ "$config_time" == "seconds" ]; then
    echo "Please enter a time for timer please: (seconds)"
    read time
    echo $time >> time_seconds.txt
elif [ "$config_time" == "hours"  ]; then
    echo "Please enter a time for timer please: (hours)"
    read time
    echo $time >> time_hours.txt
else
    echo "Please enter a time for timer please: (minutes)"
    read time
    echo $time >> time_minutes.txt
fi
clear
echo "$time $config_time"
./timer
