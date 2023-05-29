#!/bin/bash
# Send a json file to a server using the post request
curl -s -X POST -H 'Content-Type: application/json' -d "@$2" "$1"
