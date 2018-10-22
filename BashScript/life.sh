#!/bin/bash
# a life simulator 
# call with ./$

NUM_REQUIRED_ARGS=2
num_args=$#

# Do we have at lease 2 arguments 

if [ $num_args -lt $NUM_REQUIRED_ARGS ]; then 
    echo "Not enough arguments. Call this script with 
    ${0} <name> <number>"
    exit 1
fi

# Set variables, using arguments 
name=$1
number=$2
echo "Your first two arguments were: $1 $2"

#for loops; iteration, string interpolation
echo "You ran this program with ${num_args} arguments. Here they are:"
for arg in "$@"; do 
    echo "$arg"
done

spaced() {
    # parameters are not names: they are positional
    echo 
    echo "################"
    echo "$1"
    echo "################"
    echo 
}

# define an argument 
function javatest() {
    if [[ $number -eq 99 ]]; then 
        spaced "You win! You guessed the secret number! Amaaaazzzzinnng"
    elif (( $number < 10 )); then
    spaced echo " You're a courageous one.  I like that about you. Unfornately, you must still DIEE"
    echo "Hi ${name}, to avert a horrible death, please enter the passworld:"
    read password

        if [[ "$password" != "Java" ]]; then 
            spaced "Well, at lease your not a Java Programming sympathizer.  you can go now"
         else 
            spaced "DIIIIEEEEEEEE! Actually, nevermind.  Writing Java is enough "
    fi 
fi
}
# call a function

javatest $number
exit 0
