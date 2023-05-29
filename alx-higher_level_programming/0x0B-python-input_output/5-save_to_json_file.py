#!/usr/bin/python3
"""
Save an object in a json file
"""

from json import dump


def save_to_json_file(my_obj, filename):
    """Saves an object to a file
    Parameter:
    - my_obj: object to save
    - filename: file to save object in
    """
    with open(filename, 'w', encoding='utf8') as json_obj:
        dump(my_obj, json_obj)
