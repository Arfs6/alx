#!/usr/bin/python3


def add_tuple(tuple_a=(), tuple_b=()):
    """
    add_tuple: add first two elements of a topple
    @tuple_a: first tuple
    @tupple_b: second tople

    Return: sum of the two tuples
    """
    a = b = 0
    len_a = len(tuple_a)
    len_b = len(tuple_b)

    if len_a >= 2:
        a += tuple_a[0]
        b += tuple_a[1]
    elif len_a == 1:
        a += tuple_a[0]

    if len_b >= 2:
        a += tuple_b[0]
        b += tuple_b[1]
    elif len_b == 1:
        a += tuple_b[0]

    sum = (a, b)
    return sum
