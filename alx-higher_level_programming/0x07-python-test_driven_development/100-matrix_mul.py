#!/usr/bin/python3
"""This module has the function that multiplies two matrices"""


def matrix_mul(m_a, m_b):
    """multiplies two matrices

    Parameter:
    - m_a: first operand of the multiplication
    -m_b: second operand of the multiplication

    Returns:
    - result of multiplying the matrices

    Raises:
    - TypeError: invalid matrix type
    - ValueError: invalid values in matrix.
    """
    verify(m_a, m_b)
    if len(m_a[0]) != len(m_b):
        raise(ValueError("m_a and m_b can't be multiplied"))

    result = []

    for row_a in m_a:
        result_row = []
        for column in range(len(m_b[0])):
            answer = multiply(row_a, [row_b[column] for row_b in m_b])
            result_row.append(answer)
        result.append(result_row)

    return result


def verify(m_a, m_b):
    """checks if the parameters are matrices

    Parameter:
    - m_a: first matrix
    - m_b: second matrix

    Raises:
    - TypeError: invalid matrices
    - ValueError: invalid values in matrices
    """
    if not isinstance(m_a, list):
        raise(TypeError("m_a must be a list"))
    elif not isinstance(m_b, list):
        raise(TypeError("m_b must be a list"))

    try:
        if not isinstance(m_a[0], list):
            raise(TypeError("m_a must be a list of lists"))
        elif not isinstance(m_b[0], list):
            raise(TypeError("m_b must be a list of lists"))
    except IndexError:
            pass

    if m_a == [] or m_a == [[]]:
        raise(ValueError("m_a can't be empty"))
    elif m_b == [] or m_b == [[]]:
        raise(ValueError("m_b can't be empty"))

    for row in m_a:
        if not all(isinstance(element, (int, float)) for element in row):
            raise(TypeError("m_a should contain only integers or floats"))

    for row in m_b:
        if not all(isinstance(element, (int, float)) for element in row):
            raise(TypeError("m_b should contain only integers or floats"))

    length = len(m_a[0])
    if not all(len(row) == length for row in m_a):
        raise(TypeError("each row of m_a must be of the same size"))

    length = len(m_b[0])
    if not all(len(row) == length for row in m_b):
        raise(TypeError("each row of m_b must be of the same size"))


def multiply(l_a, l_b):
    """Multiplies two lists and returns the addition of the list.

    Parameter:
    - l_a: first list
    - l_b: second list

    Return: the result of the calculation
    """
    result_list = []

    # multiply all the elements of both lists and store result in
    # result_list
    idx = 0
    length = len(l_a)
    while idx < length:
        result_list.append(l_a[idx] * l_b[idx])
        idx += 1

    result = 0
    for num in result_list:
        result += num

    return result
