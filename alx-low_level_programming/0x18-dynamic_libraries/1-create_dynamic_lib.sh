#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -shared *.c -o liball.so
