#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'findSmallestMissingPositive' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY orderNumbers as parameter.
#

def findSmallestMissingPositive(orderNumbers):
    if isinstance(orderNumbers, int):
        orderNumbers = [orderNumbers]

    if not orderNumbers:
        return 1

    orderNumbers.sort()
    lowest_positive_number = 1
    for orderNumber in orderNumbers:
        if orderNumber <= 0:
            continue

        if lowest_positive_number == orderNumber:
            lowest_positive_number = orderNumber + 1

    return lowest_positive_number

if __name__ == '__main__':
    orderNumbers_count = int(input().strip())

    orderNumbers = []

    for _ in range(orderNumbers_count):
        orderNumbers_item = int(input().strip())
        orderNumbers.append(orderNumbers_item)

    result = findSmallestMissingPositive(orderNumbers)

    print(result)
