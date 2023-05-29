#!/usr/bin/python3
char = 122
while char > 96:
    temp = char
    if temp % 2 != 0:
        temp -= 32
    print('{:c}'.format(temp), end="")
    char -= 1
