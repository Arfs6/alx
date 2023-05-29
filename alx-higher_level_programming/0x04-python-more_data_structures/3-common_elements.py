#!/usr/bin/python3
"""Write a function that returns a set of common elements in two sets."""


def common_elements(set_1, set_2):
    """get common element in set_1 and set_2
    param:
    @set_1: set
    @set_2: set

    Return: intersection of set_1 and 2
    """
    if set_1 is None or set_2 is None:
        return None
    return set_1.intersection(set_2)
