#!/usr/bin/python3

def fizzbuzz():
    """
    print numbers from 0 to 100
    for multiples of 3, print Fizz instead
    for multiples of 5, print Buzz instead
    for both multiples of 3 and 5 print FizzBuzz instead
    """
    for num in range(1, 101):
        if num % 3 == 0 and num % 5 == 0:
            print("FizzBuzz", end=" ")
        elif num % 3 == 0:
            print("Fizz", end=" ")
        elif num % 5 == 0:
            print("Buzz", end=" ")
        else:
            print("{}".format(num), end=" ")
