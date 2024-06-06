'''
Standard Deviation

link : https://www.hackerrank.com/challenges/s10-standard-deviation/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
n=input()
x=map(int,input().split())
mean=round(sum(x)/float(n),1)

def standardDeviation(values,mean):
    data=[(val-mean)**2 for val in values]
    return (sum(data)/float(len(data)))**0.5
    
sd=standardDeviation(x,mean)
print (round(float(sd),1))
