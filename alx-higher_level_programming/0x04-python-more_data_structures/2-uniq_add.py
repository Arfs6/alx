#!/usr/bin/python3
"""Write a function that adds all unique integers in a list (only once for each
integer)."""


def uniq_add(my_list=[]):
    """Add all unique integers in list
    param:
    @my_list: list to add element in

    Return: result of addition
    """
    sum = 0
    for num in set(my_list):
        sum += num

    return sum
