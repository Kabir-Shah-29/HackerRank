/*
Given an array of integers, find the sum of its elements.
For example, if the array ar = [1, 2, 3], 1 + 2 + 3 = 6, so return 6.

Function Description
Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.
simpleArraySum has the following parameter(s):
ar: an array of integers

Input Format
The first line contains an integer, n, denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.

Constraints

0 < n, ar[i] <= 1000

Output Format
Print the sum of the array's elements as a single integer.

Sample Input
6
1 2 3 4 10 11

Sample Output
31

Explanation
We print the sum of the array's elements: 1 + 2 + 3 + 4 + 10 + 11 = 31.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int a[1000],n=1,i=0,result=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d ",&a[i]);
        result=result+a[i];
        }
    printf("%d",result);
    return 0;
}