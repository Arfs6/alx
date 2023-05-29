#!/usr/bin/python3

def no_c(my_string):
    """
    no_c: remove all c and C in a string
    @my_string: string to remove c in

    Return: new string
    """
    new_string = ""
    for character in my_string:
        if character in 'cC':
            continue
        new_string += character

    return new_string
