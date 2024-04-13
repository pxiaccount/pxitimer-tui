#!/bin/bash

g++ check.cpp -o check && ./check
clear
echo "You can config more in ./custom folder"
config_time=`cat ./custom/time.txt`
created=""
if [ "$config_time" == "minutes" ]; then
    echo "Please enter a time for timer please : (minutes)"
    read time
    echo $time >> time_minutes.txt
    created="minutes"
elif [ "$config_time" == "seconds" ]; then
    echo "Please enter a time for timer please: (seconds)"
    read time
    echo $time >> time_seconds.txt
    created="seconds"
elif [ "$config_time" == "hours"  ]; then
    echo "Please enter a time for timer please: (hours)"
    read time
    echo $time >> time_hours.txt
    created="hours"
else
    echo "Please enter a time for timer please: (minutes)"
    read time
    echo $time >> time_minutes.txt
    created="minutes"
fi
clear
echo "$time $config_time"
g++ timer.cpp -o timer && ./timer
rm "time_$created.txt"
