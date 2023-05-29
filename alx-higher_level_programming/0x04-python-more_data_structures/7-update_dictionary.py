#!/usr/bin/python3
"""
Write a function that replaces or adds key/value in a dictionary.
"""


def update_dictionary(a_dictionary, key, value):
    """
    update a key in a dictionary
    param:
    @a_dictionary: dictionary
    @key: key to be created or modified
    @value: value to set key to

    Return: updated dictionary
    """
    a_dictionary[key] = value
    return a_dictionary
