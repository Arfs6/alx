#!/usr/bin/python3
"""
checks if an object is a subclass of a class
"""


def inherits_from(obj, a_class):
    """check if obj is sub classof a_class"""
    classes = type(obj).mro()
    del classes[0]
    if a_class in classes:
        return True
    return False
