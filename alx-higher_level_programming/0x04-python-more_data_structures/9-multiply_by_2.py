#!/usr/bin/python3
"""
Write a function that returns a new dictionary with all values multiplied by2
"""


def multiply_by_2(a_dictionary):
    """
    multiply all the values in a dictionary by 2
    @a_dictionary: dictionary to multiply

    Return: multiplied dictionary
    """
    if a_dictionary is None:
        return None
    new_dict = a_dictionary.copy()
    for key in new_dict:
        new_dict[key] *= 2

    return new_dict
