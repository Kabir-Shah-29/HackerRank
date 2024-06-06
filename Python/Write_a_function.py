'''
Write a function

link : https://www.hackerrank.com/challenges/write-a-function/problem?isFullScreen=true
'''

def is_leap(year):
    leap = False
    if (year % 4) == 0:
        if (year % 100) == 0:
            if (year % 400) == 0:
                return True
            else:
                return leap
        else:
            return True
    else:
        return leap

