'''
Set .union() Operation

link : https://www.hackerrank.com/challenges/py-set-union/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
a=set(map(int, input().split()))

n=int(input())
b=set(map(int, input().split()))

c=a.union(b)
print(len(c))
