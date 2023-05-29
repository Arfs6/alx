#!/usr/bin/python3
"""
Module for testing Rectangle class
"""

from unittest import TestCase, main
from models.rectangle import Rectangle
from models.base import Base
import json
from os import remove


class TestRectangleAttributes(TestCase):
    """Test case for the Rectangle attributes"""

    @classmethod
    def setUpClass(self):
        """Creates objects to use for testing"""
        self.rect1 = Rectangle(3, 4)
        self.rect2 = Rectangle(3, 4, 4, 3)
        self.rect3 = Rectangle(3, 4, 5, 6, 98)

    def test_attribute_success(self):
        """Checks if the attributes were set successfully"""
        self.assertEqual(self.rect1.width, 3)
        self.assertEqual(self.rect1.height, 4)
        self.assertEqual(self.rect1.x, 0)
        self.assertEqual(self.rect1.y, 0)
        self.assertEqual(self.rect2.x, 4)
        self.assertEqual(self.rect2.y, 3)
        self.assertEqual(self.rect3.id, 98)

    def test_TypeError_width(self):
        """test for invalid types in width attributes"""
        self.assertRaises(ValueError, Rectangle, *(0, 4))
        self.assertRaises(ValueError, Rectangle, *(-2, 4))
        self.assertRaises(TypeError, Rectangle, *('3', 4))
        self.assertRaises(TypeError, Rectangle, *((3, ), 4))
        self.assertRaises(TypeError, Rectangle, *([3], 4))
        self.assertRaises(TypeError, Rectangle, *(True, 4))
        self.assertRaises(TypeError, Rectangle, *(None, 4))
        self.assertRaises(TypeError, Rectangle, *(3.4, 4))
        self.assertRaises(TypeError, Rectangle, *({3: 4}, 4))

    def test_TypeError_height(self):
        """Test invalid types for height"""
        self.assertRaises(ValueError, Rectangle, *(3, 0))
        self.assertRaises(ValueError, Rectangle, *(3, -3))
        self.assertRaises(TypeError, Rectangle, *(2, None))
        self.assertRaises(TypeError, Rectangle, *(3, True))
        self.assertRaises(TypeError, Rectangle, *(3, '4'))
        self.assertRaises(TypeError, Rectangle, *(3, [4]))
        self.assertRaises(TypeError, Rectangle, *(3, (4, )))
        self.assertRaises(TypeError, Rectangle, *(3, 4.3))
        self.assertRaises(TypeError, Rectangle, *(3, {4: 3}))

    def test_TypeError_x(self):
        """Test for invalid x attribute"""
        self.assertRaises(TypeError, Rectangle, *(3, 4, None))
        self.assertRaises(ValueError, Rectangle, *(3, 4, -3))
        self.assertRaises(TypeError, Rectangle, *(3, 4, True))
        self.assertRaises(TypeError, Rectangle, *(3, 4, '3'))
        self.assertRaises(TypeError, Rectangle, *(3, 4, [3]))
        self.assertRaises(TypeError, Rectangle, *(3, 4, (3, )))
        self.assertRaises(TypeError, Rectangle, *(3, 4, {3: 4}))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3.4))

    def test_TypeError_y(self):
        """Test for invalid y attribute"""
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, None))
        self.assertRaises(ValueError, Rectangle, *(3, 4, 3, -3))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, True))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, 4.3))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, '4'))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, [4]))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, (4, )))
        self.assertRaises(TypeError, Rectangle, *(3, 4, 3, {4: 3}))

    def test_arguments(self):
        """Test with invalid number of arguments to init"""
        with self.assertRaises(TypeError):
            r = Rectangle()
        with self.assertRaises(TypeError):
            R = Rectangle(3)


class TestRectangleMethods(TestCase):
    """Test case for the Rectangle methods"""

    @classmethod
    def setUpClass(self):
        """Creates objects to test with"""
        self.rect1 = Rectangle(3, 4)
        self.rect2 = Rectangle(3, 4, 4, 3)
        self.rect3 = Rectangle(3, 4, 4, 3, 899)

    @classmethod
    def get_print(self, func, *args):
        """Calls a function that prints something and stores the thing that was
        printed as a string"""
        import sys
        from tempfile import TemporaryFile
        temp_stdout = TemporaryFile(mode='r+')
        stdout = sys.stdout
        setattr(sys, 'stdout', temp_stdout)
        try:
            func(*args)
        finally:
            setattr(sys, 'stdout', stdout)
            temp_stdout.seek(0)
            output = temp_stdout.read()
            temp_stdout.close()

        return output

    def test_area(self):
        """Tests the area method"""
        self.assertEqual(self.rect1.area(), 12)
        with self.assertRaises(TypeError):
            self.rect1.area(3)

    def test_display(self):
        """tests the display method"""
        output = self.get_print(self.rect1.display)
        self.assertEqual(output, f"{'#' * self.rect1.width}\n" * self.rect1.height)
        assert_str = '\n' * self.rect2.y
        assert_str += f"{' ' * self.rect2.x}{self.rect2.width * '#'}\n" * self.rect2.height
        output = self.get_print(self.rect2.display)
        self.assertEqual(output, assert_str)

    def test_str(self):
        """Tests the __str__ method of the class"""
        assert_str = (f"[Rectangle] ({self.rect1.id}) "
                f"{self.rect1.x}/{self.rect1.y} - "
                f"{self.rect1.width}/{self.rect1.height}")
        self.assertEqual(str(self.rect1), assert_str)

        assert_str = (f"[Rectangle] ({self.rect2.id}) "
                f"{self.rect2.x}/{self.rect2.y} - "
                f"{self.rect2.width}/{self.rect2.height}")
        self.assertEqual(str(self.rect2), assert_str)

        assert_str = (f"[Rectangle] ({self.rect3.id}) "
                f"{self.rect3.x}/{self.rect3.y} - "
                f"{self.rect3.width}/{self.rect3.height}")
        self.assertEqual(str(self.rect3), assert_str)

    def test_update(self):
        """Test the update method of the class"""
        # testing using positional arguments
        rect = Rectangle(10, 20)
        rect.update(90)
        self.assertEqual(rect.id, 90)
        rect.update(90, 40)
        self.assertEqual(rect.width, 40)
        rect.update(90, 40, 70)
        self.assertEqual(rect.height, 70)
        rect.update(90, 40, 70, 256)
        self.assertEqual(rect.x, 256)
        rect.update(90, 40, 70, 256, 512)
        self.assertEqual(rect.y, 512)
        assert_tup = (90, 40, 70, 256, 512)
        attr_tup = (rect.id, rect.width, rect.height, rect.x, rect.y)
        self.assertEqual(assert_tup, attr_tup)

        # now testing with key word arguments
        rect.update(id=98)
        self.assertEqual(rect.id, 98)
        rect.update(100, id=98)
        self.assertEqual(rect.id, 100)
        rect.update(y=10, x=20)
        self.assertEqual((10, 20), (rect.y, rect.x))

    def test_to_dictionary(self):
        """tests the to_dictionary method"""
        attr_dict = {
                'id': 899, 'y': 3, 'x': 4,
                'height': 4, 'width': 3
                }
        self.assertEqual(attr_dict, self.rect3.to_dictionary())
        self.rect3.x = 20
        self.rect3.update(99)
        attr_dict['id'] = 99
        attr_dict['x'] = 20
        self.assertEqual(attr_dict, self.rect3.to_dictionary())

    def test_to_json_string(self):
        """Tests the to_json_string method"""
        assert_dict = [self.rect1.to_dictionary(), self.rect3.to_dictionary()]
        self.assertEqual(self.rect1.to_json_string(assert_dict),
                json.dumps(assert_dict))
        self.assertEqual(self.rect1.to_json_string(None), '[]')
        self.assertEqual(self.rect1.to_json_string([]), '[]')


class TestClassMethod(TestCase):
    """Tests the class methods and the static methods"""

    @classmethod
    def setUpClass(self):
        self.rect_list = []
        for i in range(2, 8):
            self.rect_list.append(Rectangle(i, i ** 2, i * 2, i * 3))

        self.rect_dicts = [r.to_dictionary() for r in self.rect_list]
        self.rect1 = Rectangle(3, 4, 6, 7, 1024)
        self.fn_json = 'Rectangle'

    def test_save_to_file(self):
        """Test the save to file method"""
        filename = self.fn_json
        Rectangle.save_to_file(self.rect_list)
        try:
            with open('Rectangle.json') as json_file:
             self.assertEqual(json.dumps(self.rect_dicts),
                     json.load(json_file))
        finally:
            remove(filename)
        Rectangle.save_to_file([])
        try:
            with open(filename) as json_file:
                content = json.load(filename)
                self.assertEqual([], content)
        finally:
            remove(filename)

    def test_load_from_file(self):
        """Test the load from file method"""
        pass


if __name__ == "__main__":
    main()
