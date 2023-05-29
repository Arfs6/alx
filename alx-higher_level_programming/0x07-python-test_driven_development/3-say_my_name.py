#!/usr/bin/python3
""""""


def say_my_name(first_name, last_name=""):
    """Print's the users name
    format: My name is <firstname> <lastname>

    Parameter:
    - first_name: first name. (Mandatory)
    -last_name: last name (optional)

    Raises:
    -TypeError: invalid first name or last name
    """
    if not isinstance(first_name, str):
        raise(TypeError("first_name must be a string"))
    elif not isinstance(last_name, str):
        raise(TypeError("last_name must be a string"))

    name = f'{first_name} '
    if last_name != "":
        name += last_name
    print("My name is {}".format(name))
