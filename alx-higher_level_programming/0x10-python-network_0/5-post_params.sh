#!/bin/bash
# Set some variables and send a post request
curl -ls -X POST -d 'email=test@gmail.com&subject=I will always be here for PLD' "$1"
