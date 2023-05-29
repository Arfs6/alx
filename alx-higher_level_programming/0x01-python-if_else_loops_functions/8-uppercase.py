#!/usr/bin/python3

def uppercase(str):
    """Print a string in upper case without using .upper"""
    for char in str:
        i = ord(char)
        if i >= 97 and i <= 122:
            char = chr(i - 32)

        print('{}'.format(char), end="")

    print()
