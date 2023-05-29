#!/usr/bin/python3
"""
this module has test cases fofr the Square class
"""

from unittest import TestCase, main
from models.square import Square


class TestSquare(TestCase):
    """Test the Square class"""

    @classmethod
    def setUpClass(self):
        """Create square objects to test with"""
        self.square1 = Square(4)
        self.square2 = Square(3, 3, 4)
        self.square3 = Square(4, 5, 6, 98)

    def test_attributes(self):
        """Tests if the attributes are set successfully"""
        self.assertEqual(self.square1.width, 4)
        self.assertEqual(self.square2.height, 3)
        self.assertRaises(TypeError, Square, *('hello'))
        self.assertEqual(self.square2.x, 3)
        self.assertEqual(self.square2.y, 4)
        with self.assertRaises(TypeError):
            self.square1.y = '4'
        self.assertRaises(TypeError, Square, *(3, '3'))
        self.square1.size = 10
        self.assertEqual(self.square1.size, 10)
        with self.assertRaises(TypeError):
            self.square1.size = '3'

    def test_str(self):
        """Tests the __str__ method"""
        assert_str = f"[Square] ({self.square1.id}) "
        assert_str += f"{self.square1.x}/{self.square1.y} - {self.square1.size}"
        self.assertEqual(assert_str, str(self.square1))
        assert_str = f"[Square] ({self.square2.id}) "
        assert_str += f"{self.square2.x}/{self.square2.y} - {self.square2.size}"
        self.assertEqual(assert_str, str(self.square2))
        assert_str = f"[Square] ({self.square3.id}) "
        assert_str += f"{self.square3.x}/{self.square3.y} - {self.square3.size}"
        self.assertEqual(assert_str, str(self.square3))

    def test_update(self):
        """Tests the update method"""
        self.square3.update(256)
        self.assertEqual(self.square3.id, 256)
        self.square3.update(256, 20)
        self.assertEqual(self.square3.size, 20)
        self.assertEqual(self.square3.height, 20)
        self.assertEqual(self.square3.width, 20)
        self.square3.update(256, 20, 1024, 512)
        self.assertEqual(self.square3.x, 1024)
        self.assertEqual(self.square3.y, 512)
        square_tup = (self.square3.id, self.square3.size, self.square3.x,
                self.square3.y)
        assert_tup = (256, 20, 1024, 512)
        self.assertEqual(assert_tup, square_tup)
        self.square3.update(200, y=30)
        self.assertEqual(self.square3.id, 200)
        self.assertEqual(self.square3.y, 512)
        self.square3.update(x=20, size=90)
        self.assertEqual(self.square3.size, 90)
        self.assertEqual(self.square3.x, 20)

    def test_to_dictionary(self):
        """Tests the to_dictionary method"""
        assert_dict = {'id': 98, 'x': 5, 'y': 6, 'size': 4}
        self.assertEqual(self.square3.to_dictionary(), assert_dict)
        self.square3.size = 10
        self.square3.x = 256
        assert_dict['x'] = 256
        assert_dict['size'] = 10
        self.assertEqual(self.square3.to_dictionary(), assert_dict)


if __name__ == "__main__":
    main()
