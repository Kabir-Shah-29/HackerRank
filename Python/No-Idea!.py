'''
No Idea!

link : https://www.hackerrank.com/challenges/no-idea/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n=input().split()
m=input().split()
A=set(input().split())
B=set(input().split())
count=0

for i in m:
    if i in A:
        count+=1
    if i in B:
        count-=1
print(count)
