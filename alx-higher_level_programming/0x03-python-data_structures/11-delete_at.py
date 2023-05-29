#!/usr/bin/python3
"""Write a function that deletes the item at a specific position in a list."""


def delete_at(my_list=[], idx=0):
    """
    delete_at: delete an element in a list
    @my_list: list to delete from
    @idx: index of element

    Return: list with deleted element
    """
    if idx < 0 or idx > len(my_list) - 1:
        return my_list

    del my_list[idx]
    return my_list
