#!/usr/bin/python3
"""
Write a function that prints a dictionary by ordered keys.
"""


def print_sorted_dictionary(a_dictionary):
    """
    print a sorted version of the dictionary passed
    param:
    @a_dictionary: dictionary
    """
    for key in sorted(a_dictionary):
        print(f"{key}: {a_dictionary[key]}")
