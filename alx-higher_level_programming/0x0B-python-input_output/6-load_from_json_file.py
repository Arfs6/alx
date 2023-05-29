#!/usr/bin/python3
"""
Write a function that creates an object from a json file
"""

from json import load


def load_from_json_file(filename):
    """Creates an object from a json file
    Parameter:
    - filename: file to read object from
    Return:
    - object read
    """
    with open(filename, 'r', encoding='utf-8') as json_obj:
        return load(json_obj)
