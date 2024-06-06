'''
Set .add()

link : https://www.hackerrank.com/challenges/py-set-add/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
N=int(input())
stamps=set([])

for i in range(N):
    stamps.add(input())
print(len(stamps))
