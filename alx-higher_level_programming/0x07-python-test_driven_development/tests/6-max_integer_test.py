#!/usr/bin/python3
"""
this module has the test case for the max_integer function.
"""

import unittest
max_integer = __import__('6-max_integer').max_integer


class TestMaxInteger(unittest.TestCase):
    """Test the max_integer funtion"""

    def test_max(self):
        """testing if it returns the max integer"""
        # max at the middle
        self.assertEqual(max_integer([2, 5, 8, 3]), 8)
        # max at the begining
        self.assertEqual(max_integer([8, 4, 1, 0]), 8)
        # max at the end
        self.assertEqual(max_integer([0, 4, 2, 8]), 8)
        # test with negative numbers
        self.assertEqual(max_integer([-3, 6, 2, 8]), 8)
        # test for double max
        self.assertEqual(max_integer([2, 5, 7, 10, 10]), 10)
        # test with pure negative numbers
        self.assertEqual(max_integer([-10, -5, -6]), -5)
        # test with pure zeros
        self.assertEqual(max_integer([0, 0, 0, 0]), 0)

    def test_empty(self):
        """test for an empty list"""
        self.assertIsNone(max_integer([]))


        if __name__ == "__main__":
            unittest.main()
