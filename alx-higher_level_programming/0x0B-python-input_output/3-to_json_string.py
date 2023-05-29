#!/usr/bin/python3
"""
convert a object to a json string
"""

from json import dumps


def to_json_string(my_obj):
    """Converts an object to json format
    Parameter:
    - my_obj: object to convert
    Returns:
    - string representation of the object
    """
    return dumps(my_obj)
