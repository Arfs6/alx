#!/usr/bin/python3

def multiple_returns(sentence):
    """
    multiple_return: return 2 different data
    @sentence: string to get data from

    Return: lenght and first character of string passed
    """
    length = len(sentence)
    first_character = None
    if length >= 1:
        first_character = sentence[0]

    return (length, first_character)
