#!/usr/bin/python3
for left in range(9):
    for right in range(left + 1, 10):
        if left == 8 and right == 9:
            continue
        print('{}{}'.format(left, right), end=", ")
print('89')
