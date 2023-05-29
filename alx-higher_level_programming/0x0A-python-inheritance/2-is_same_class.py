#!/usr/bin/python3
"""
solution for task 2 of instance project
"""


def is_same_class(obj, a_class):
    """checks if the arguments are of the same class
    Parameter:
    - obj: object to check
    - a_class: possible class

    Returns:
    - True: obj is an instance of o_class
    -False: obj is not an instance of o_class
    """
    return type(obj) == a_class
