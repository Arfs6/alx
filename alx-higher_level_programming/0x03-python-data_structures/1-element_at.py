#!/usr/bin/python3


def element_at(my_list, idx):
    """
    element_at: retrieves element in a list at a given index
    @my_list: list to retrieve index from
    @idx: index of element

    Return: data at index
    None: invalid index
    """
    if idx < 0 or idx > len(my_list) - 1:
        return None

    return my_list[idx]
