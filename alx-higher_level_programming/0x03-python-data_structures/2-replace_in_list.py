#!/usr/bin/python3


def replace_in_list(my_list, idx, element):
    """
    replace_in_list: replace an element in a list
    @my_list: list to replace an element in
    @idx: index of element
    @element: what to replace with

    Return: modified list
    """
    if idx < 0 or idx > len(my_list) - 1:
        return my_list

    my_list[idx] = element
    return my_list
