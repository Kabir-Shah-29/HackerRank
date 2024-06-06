'''
Introduction to Sets

link : https://www.hackerrank.com/challenges/py-introduction-to-sets/problem?isFullScreen=true
'''

def average(array):
    s = set(array)
    l=len(s)
    s1=sum(s)
    return (s1/l)

