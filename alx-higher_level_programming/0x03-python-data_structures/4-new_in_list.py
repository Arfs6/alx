#!/usr/bin/python3

def new_in_list(my_list, idx, element):
    """
    new_in_list: replace an element in a copy of the list passed
    @my_list: list to copy and replace element in
    @idx: index of element to replace
    @element: data to replace with

    Return: new element
    """
    if idx < 0 or idx > len(my_list) - 1:
        return my_list[:]

    new_list = my_list[:]
    new_list[idx] = element

    return new_list
