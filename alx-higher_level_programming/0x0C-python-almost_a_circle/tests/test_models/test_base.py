#!/usr/bin/python3
"""
Module to test the Base class
"""

from models.base import Base
import unittest


class TestBase(unittest.TestCase):
    """Testing the Base class..."""

    @classmethod
    def setUpClass(self):
        """Creates Base object to test with"""
        self.b1 = Base()
        self.b98 = Base(98)
        self.b2 = Base()

    def test_default_id(self):
        """Test instances of Base with default id"""
        self.assertEqual(self.b1.id, 1)
        self.assertEqual(self.b2.id, 2)

    def test_custom_id(self):
        """Tests instances of Base with custom id"""
        self.assertEqual(self.b98.id, 98)


if __name__ == "__main__":
    unittest.main()
