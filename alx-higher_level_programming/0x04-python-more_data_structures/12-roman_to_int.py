#!/usr/bin/python3
"""roman numeral module"""


def roman_to_int(roman_string):
    """converts roman numerals to integers
    Parameter:
    - roman_string: roman numeral string

    Returns:
    - integer representation of roman numeral
    """
    if not isinstance(roman_string, str) or not roman_string:
        return 0

    roman_dict = {
        'C': 100, 'M': 1000, 'X': 10, 'I': 1, 'V': 5, 'L': 50, 'D': 500
    }
    ans, hold = (0, 0)
    prevNum = None
    for curNum in roman_string:
        if not prevNum:
            hold += roman_dict[curNum]
            prevNum = roman_dict[curNum]
            continue

        if prevNum == roman_dict[curNum]:
            hold += roman_dict[curNum]
            continue
        elif prevNum > roman_dict[curNum]:
            ans += hold
            hold = roman_dict[curNum]
            prevNum = roman_dict[curNum]
            continue

        # prevNum must be less than curNun
        ans -= hold
        hold = roman_dict[curNum]
        prevNum = roman_dict[curNum]

    if prevNum >= roman_dict[curNum]:
        ans += hold
    else:
        ans -= hold

    return ans
