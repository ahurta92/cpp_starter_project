#!/bin/bash
# testing and control flow with if, [ and [[, and/or

NUM_REQUIRED_ARGS=2

if [[ $# -lt NUM_REQUIRED_ARGS ]]; then
    echo "Not enough arguments with ./{$0} <name> <number>"
fi

## helpers
# && and 
# || or 

## in your terminal
echo "hi." || echo "This won't happen."
$(ls nonexistantfile) || echo "This happens if the first thing fails"
echo $(pwd) && echo "This also happens!"

## Strings
str1="a"
str2="b"

if [[ "$str1" = "$str2" ]]; then
    echo "${str1} is equal to ${str2}!"
fi

if [[ "$str1" != "$str2" ]]; then
    echo "${str1} is not equal to ${str2}!"
fi

# Not Null (-n) or Zero Length (-z)
notnully="This is something (not nothing)"
nully=""

if [ -n "$notnully" ]; then
    echo "This is not nully..."
fi

if [ -z "$nully"]; then
    echo "nully/zeroooo (length)"
fi



# Integers

int1=4
int2=7

if [ $int1 -eq $int2 ]; then
    echo "equal"
fi 

if [ $int1 -ne $int2 ]; then
    echo "${int1} is NOT equal to ${int2}."
fi

if [ $int1 -gt $int2 ]; then
    echo "greater than"
fi 

if [ $int1 -le $int2 ]; then
    echo "less than"
fi

# string comparison operators can be used with double parenthese
if (( $int1 == $int2 )); then 
    echo "${int1} is equal to ${int2}."
fi









