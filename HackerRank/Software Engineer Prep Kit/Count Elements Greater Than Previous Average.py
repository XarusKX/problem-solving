#!/bin/python3


#
# Complete the 'countResponseTimeRegressions' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY responseTimes as parameter.
#

def countResponseTimeRegressions(responseTimes):
    if isinstance(responseTimes, int):
        responseTimes = [responseTimes]

    if not responseTimes:
        return 0

    greatest_previous_score = responseTimes[0]
    greatest_element_days = 0
    for index, responseTime in enumerate(responseTimes[1:], start=1):
        if responseTime > (greatest_previous_score / index):
            greatest_element_days += 1
        greatest_previous_score += responseTime

    return greatest_element_days


if __name__ == '__main__':
    responseTimes_count = int(input().strip())

    responseTimes = []

    for _ in range(responseTimes_count):
        responseTimes_item = int(input().strip())
        responseTimes.append(responseTimes_item)

    result = countResponseTimeRegressions(responseTimes)

    print(result)
