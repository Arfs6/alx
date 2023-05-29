#!/usr/bin/python3


def complex_delete(a_dictionary, value):
    """delete an item in a dictionary"""
    key_list = []
    for key in a_dictionary:
        if a_dictionary[key] == value:
            key_list.append(key)

    for key in key_list:
        del a_dictionary[key]

    return a_dictionary
