#!/usr/bin/python3

def islower(c):
    """check if the character passed is in lower case"""
    i = ord(c)
    if i >= 97 and i <= 122:
        return True

    return False
