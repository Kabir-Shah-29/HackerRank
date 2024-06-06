'''
Mean, Median, and Mode

link : https://www.hackerrank.com/challenges/s10-basic-statistics/problem?isFullScreen=true
'''

# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np
from scipy import stats


n = int(input())
arr = list(map(int, input().split()))
print(np.mean(arr))
print(np.median(arr))
print(stats.mode(arr)[0][0])
