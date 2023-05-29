#!/usr/bin/python3
"""
write a function that appends a text to a file
"""


def append_write(filename="", text=""):
    """Appends a text to a file
    Parameter:
    - filename: name of file to append
    - text: text to append to file
    Returns:
    number of characters writting
    """
    if not filename:
        return
    with open(filename, 'a', encoding='utf8') as f_obj:
        return f_obj.write(text)
