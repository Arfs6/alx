#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""Module for singly linked list"""


class Node:
    """A node in a singly linked list"""

    def __init__(self, data, next_node=None):
        """initialized an instance of the Node

        Args:
            data: integer to store in node
            next_node: next node in list
        """
        self.data = data
        self.next_node = next_node

    @property
    def data(self):
        """get's the data of the node"""
        return self.__data

    @data.setter
    def data(self, value):
        """set's a new value of a data"""
        if not isinstance(value, int):
            raise(TypeError('data must be an integer'))
        self.__data = value

    @property
    def next_node(self):
        """get's the next node in the list"""
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        """set the next node in a list
        Args:
           value: value to set next node
        """
        if not isinstance(value, Node) and value is not None:
            raise(TypeError('next_node must be a Node object'))
        self.__next_node = value


class SinglyLinkedList:
    """A pythonic representation of a singly linked list"""

    def __init__(self):
        """initialize a singly linked list"""
        self.__head = None

    def sorted_insert(self, value):
        """Insert a new node in a list
        list should be sorted

        Args:
            value: new node
        """
        newNode = Node(value)

        if not self.__head:
            self.__head = newNode
            return

        if newNode.data <= self.__head.data:
            newNode.next_node = self.__head
            self.__head = newNode
            return

        node = self.__head
        while True:
            temp = node
            node = node.next_node
            if not node:
                break
            if newNode.data < node.data and newNode.data > temp.data:
                temp.next_node = newNode
                newNode.next_node = node
                return
            elif newNode.data == node.data:
                temp.next_node = newNode
                newNode.next_node = node
                return

        temp.next_node = newNode
        return

    def __str__(self):
        """returns a string for printing"""
        str = ""

        if not self.__head:
            return str

        node = self.__head
        newLine = '\n'
        while node:
            if not node.next_node:
                newLine = ''
            str += "{}{}".format(node.data, newLine)
            node = node.next_node

        return str
