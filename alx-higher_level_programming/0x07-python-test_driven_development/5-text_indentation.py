#!/usr/bin/python3
"""
Write a function that prints a text with 2 new lines after each of these
characters: ., ? and :
"""


def text_indentation(text):
    """prints a string. the output should have two line breaks after a '.', ':'
    or '?'.

    Parameter:
    - text: text to print

    Raises:
    - TypeError: text is not a string
    """
    if not isinstance(text, str):
        raise(TypeError("text must be a string"))

    output = ""
    output = add_newLine(text, ".")
    output = add_newLine(output, "?")
    output = add_newLine(output, ":")

    print(output, end='')

def add_newLine(text, delim):
    """Add new line characters after delimeter and strip any trailling whitty
    space

    Parameters:
    - text: string to change delimeters
    - delim: delimeter to separate text with
    """
    newStr = ""
    text = text.lstrip(' ')
    while True:
        temp, delim, text = text.partition(delim)
        if delim:
            temp += f"{delim}\n\n"
        newStr += temp
        text = text.lstrip(' ')
        if not text:
            break

    return newStr
