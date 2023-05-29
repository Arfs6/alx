#!/usr/bin/python3
"""
Write a function that returns a set of all elements present in only one set.
"""


def only_diff_elements(set_1, set_2):
    """
    get unique element in both set
    param:
    @set_1: set
    @set_2: set

    Return: list of unique element in set 1 and 2
    """
    if set_1 is None or set_2 is None:
        return None
    return set_1.symmetric_difference(set_2)
