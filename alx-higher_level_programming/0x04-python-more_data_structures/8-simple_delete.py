#!/usr/bin/python3
"""
Write a function that deletes a key in a dictionary.
"""


def simple_delete(a_dictionary, key=""):
    """
    delete a key in a dictionary
    param:
    @a_dictionary: dictionary
    @key: key to delete

    Return: updated key
    """
    if a_dictionary.get(key):
        del a_dictionary[key]
    return a_dictionary
