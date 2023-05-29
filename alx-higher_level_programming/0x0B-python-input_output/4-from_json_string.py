#!/usr/bin/python3
"""
Converts a json a string to the appropriate object
"""

from json import loads


def from_json_string(my_str):
    """Converts a json string to the appropriate type
    Parameter:
    - my_str: string to convert
    Return:
    - object gotten when converted
    """
    return loads(my_str)
