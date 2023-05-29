#!/usr/bin/python3
"""
solution for task 3 of inheritance project
"""


def is_kind_of_class(obj, a_class):
    """Checks if obj is a class or subclass of a_class
    Parameter:
    - obj: object to check
    - a_class: class to check against
    Returns:
    - True: obj is a sub-class or class of a_class
    - False: obj is not a subclass or class of a_class
    """
    return isinstance(obj, a_class)
