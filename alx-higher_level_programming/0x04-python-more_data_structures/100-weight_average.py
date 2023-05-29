#!/usr/bin/python3
"""Finds the weighted average"""


def weight_average(my_list=[]):
    """finds the weighted average

    Parameter:
    - my_list: list containing tuple of scores with weight

    Returns:
    - average
    """
    if len(my_list) == 0:
        return 0

    acc = 0
    total_weight = 0
    for score in my_list:
        acc += score[0] * score[1]
        total_weight += score[1]

    return acc / total_weight
