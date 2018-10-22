#!/bin/bash

NAME=$1
GREETING="Hi Dave!"
HAT_TIP="Tip of the hat"
HEAD_SHAKE="*slow head shake*"

# IDE completion 
if [ "$NAME" = "Dave" ]; then
   echo ${GREETING}
elif [ "$NAME" = "Steve" ]; then
    echo ${HAT_TIP}
else 
    echo ${HEAD_SHAKE}
fi
