#!/usr/bin/python3
"""
Write a function that returns a key with the biggest integer value.
"""


def best_score(a_dictionary):
    if not a_dictionary:
        return None
    _max = None
    ans = ''
    for key in a_dictionary:
        if _max is None:
            _max = a_dictionary[key]
            ans = key
            continue
        if _max < a_dictionary[key]:
            _max = a_dictionary[key]
            ans = key

    return ans
