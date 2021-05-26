#!/bin/bash

# Mostly the same as run.sh but it then exits the program with code 0

if [ -f string.out ]
then
    rm string.out 
fi

if [ -f math.out ]
then
    rm math.out
fi

if [ -f menu.out ]
then
    rm menu.out
fi

if [ -f a.out ]
then
    rm a.out
fi

if [ -f rockpaperscissors.out ]
then
    rm rockpaperscissors.out
fi

if [ -f anime.out ]
then
    rm anime.out
fi

clear
exit 0;
