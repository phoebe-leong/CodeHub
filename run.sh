#!/bin/bash

# Checks for any of the .out files left behind from the last program and deletes them

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

g++ -o menu.out main.cpp
./menu.out
