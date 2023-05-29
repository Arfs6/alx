#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

flag = False
if number < 0:
    flag = True
    number *= -1
lastDigit = number % 10
if flag:
    lastDigit *= -1

if lastDigit > 5:
    str = "and is greater than 5"
elif lastDigit == 0:
    str = "and is 0"
elif lastDigit < 6:
    str = "and is less than 6 and not 0"

if flag:
    number *= -1

message = f"Last digit of {number} is {lastDigit} {str}"
print(message)
