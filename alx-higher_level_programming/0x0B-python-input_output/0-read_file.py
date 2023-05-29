#!/usr/bin/python3
"""
write a function that reads a file and prints it to standard output
"""


def read_file(filename=""):
    """Read a file and writes it to stdout
    Parameter:
    - filename: name of file to read
    """
    if not filename:
        return
    with open(filename, 'r', encoding='utf-8') as f_obj:
        for line in f_obj:
            print(line, end='')
