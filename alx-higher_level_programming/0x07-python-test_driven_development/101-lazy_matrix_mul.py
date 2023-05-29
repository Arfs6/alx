#!/usr/bin/python3
"""This module has the function that multiplies two matrices"""

from numpy import matmul


def lazy_matrix_mul(m_a, m_b):
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

    result = matmul(m_a, m_b)

    return result.tolist()
