'''
Company Logo

link : https://www.hackerrank.com/challenges/most-commons/problem?isFullScreen=true
'''

#!/bin/python3

import math
import os
import random
import re
import sys
from collections import Counter



if __name__ == '__main__':
    s = input()
    s = sorted(s)
    
    f=Counter(list(s))
    for k, v in f.most_common(3):
        print(k, v)
