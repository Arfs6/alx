#!/bin/bash
#Print the size of the content returned when an http request is sent
curl -I -s "$1" | grep 'Content-Length:' | awk -F ' ' '{print $2}'
