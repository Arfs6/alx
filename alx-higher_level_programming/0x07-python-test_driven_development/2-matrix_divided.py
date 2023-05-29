#!/usr/bin/python3
"""This module has the functions that divides a matrix"""


def matrix_divided(matrix, div):
    """divide each element of the matrix

    Parameters:
    - matrix: matrix to divide
    - div: number to divide matrix with

    Return:
    - result of division

    Raises:
    - TypeError: if invalid matrix or number to divide with was passed
    - ZeroDivisionError: div is equal to zero
    """
    # check if matrix is a matrix
    MatrixError = TypeError(
            "matrix must be a matrix (list of lists) of integers/floats"
            )
    if not isinstance(matrix, list) or not isinstance(matrix[0], list):
        raise(MatrixError)
    for row in matrix:
        if not all(isinstance(element, (int, float)) for element in row):
            raise(MatrixError)

    # check if the rows are of the same length
    length = len(matrix[0])
    if length == 0:
        return matrix  # empty matrix
    elif not all(len(row) == length for row in matrix):
        raise(TypeError("Each row of the matrix must have the same size"))

    # check if div is a number and not equal to 0
    if not isinstance(div, (int, float)):
        raise(TypeError("div must be a number"))
    elif div == 0:
        raise(ZeroDivisionError("division by zero"))

    result = []
    for row in matrix:
        temp = [num / div for num in row]
        temp = [round(num, 2) for num in temp]
        result.append(temp)

    return result
