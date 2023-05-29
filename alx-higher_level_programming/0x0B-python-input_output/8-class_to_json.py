#!/usr/bin/python3
"""
write a script that saves a snapshot of a class attributes.
"""


def class_to_json(obj):
    """Converts all the attr of a class to a json format in a dict.
    Parameter:
    - obj: object to get it's attribute
    Return:
    - a dictionary of attribute - value pair.
    """
    dict_attr = dict()
    list_attr = [attr for attr in dir(obj) if not attr.endswith('__')]
    for attr in list_attr:
        dict_attr[attr] = getattr(obj, attr)

    return dict_attr
