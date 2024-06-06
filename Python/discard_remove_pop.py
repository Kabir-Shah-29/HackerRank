'''
Set .discard(), .remove() & .pop()

link : https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem?isFullScreen=true
'''

n = int(input())
s = set(map(int, input().split()))
N=int(input())

for i in range(N):
    s1=input().split()
    if s1[0]=='pop':
        s.pop()
    elif s1[0]=='remove':
        s.remove(int(s1[1]))
    elif s1[0]=='discard':
        s.discard(int(s1[1]))

print(sum(s))
