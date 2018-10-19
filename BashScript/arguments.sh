#!/bin/bash

## Arguments reference:
# s# --> number of args that our script was run with 
# s0 --> the filename of our script
# s1..$n --> script arguments

# what's our filename?
ourfilename=$0
echo $ourfilename

# how many arguments was the script given
num_arguments=$#

# what were the arguements 
echo "The first three arguements were ${1} ${2} ${3} "
