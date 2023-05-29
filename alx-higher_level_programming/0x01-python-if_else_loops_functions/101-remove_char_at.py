#!/usr/bin/python3

def remove_char_at(str, n):
    """remove a given character at an index of a string"""
    if (n < 0):
        return str
    elif len(str) < n:
        return str
    str = str[:n] + str[n + 1:]
    return str
