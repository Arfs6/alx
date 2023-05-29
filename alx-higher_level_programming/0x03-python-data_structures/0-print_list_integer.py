#!/usr/bin/python3

def print_list_integer(my_list=[]):
    """
    print_list_integer: print all integers in list passed. All element that
    will be passed are ints.
    @my_list: list containing intergers
    """
    for num in my_list:
        print("{:d}".format(num))
