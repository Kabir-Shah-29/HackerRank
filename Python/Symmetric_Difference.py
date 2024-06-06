'''
Symmetric Difference

link : https://www.hackerrank.com/challenges/symmetric-difference/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
M=int(input())
a=set(map(int,input().split()))
N=int(input())
b=set(map(int,input().split()))

c=a.difference(b)
d=b.difference(a)

e=c.union(d)

e=list(e)

e.sort()

for i in range(len(e)):
    print(e[i])
