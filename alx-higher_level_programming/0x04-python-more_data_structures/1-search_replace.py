#!/usr/bin/python3
"""Write a function that replaces all occurrences of an element by another in a
new list."""


def search_replace(my_list, search, replace):
    """replace an element in a list
    param:
    @my_list: list to search element in
    @search: what to search in list
    @replace: what to replace

    Return: new list with replaced item
    """
    newList = my_list[:]
    if search not in newList:
        return newList
    for item in newList:
        if item is search:
            newList[newList.index(item)] = replace

    return newList
