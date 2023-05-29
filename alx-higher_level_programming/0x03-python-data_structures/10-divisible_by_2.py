#!/usr/bin/python3


def divisible_by_2(my_list=[]):
    """
    divisible_by_2: check for numbers divisible by two
    @my_list: list to check numbers in

    Return: a list with bullian representing if the num in the index is
    divisible by 2 or not
    """
    new_list = []
    for num in my_list:
        if num % 2 == 0:
            new_list.append(True)
        else:
            new_list.append(False)

    return new_list
