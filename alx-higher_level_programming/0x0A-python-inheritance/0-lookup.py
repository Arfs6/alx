#!/usr/bin/python3
"""
write a function that returns a list containing all the attributes and method
of an object
"""


def lookup(obj):
    """Gets all the attributes and methods of an object
    Parameter:
    - obj: Any object

    Return:
    - list containing alll the attributes and methods
    """
    return dir(obj)
