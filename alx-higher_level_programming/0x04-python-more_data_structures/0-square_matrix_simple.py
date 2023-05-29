#!/usr/bin/python3


def square_matrix_simple(matrix=[]):
    """find the squares of all values in the matrix passed
    param:
    @matrix: matrix to square
    Return: new matrix with squared values
    """
    square = []
    if matrix is None or matrix[0] is None:
        return None

    for row in matrix:
        square.append([num**2 for num in row])

    return square
