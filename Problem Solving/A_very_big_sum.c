/*
In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

int ar[n]: an array of integers .
Return

long: the sum of all array elements

Input Format
The first line of the input consists of an integer n.
The next line contains  space-separated integers contained in the array.

Output Format
Return the integer sum of the elements in the array.

Constraints

1 <= n <= 10
0 <= ar[i] <= 10^10

Sample Input
5
1000000001 1000000002 1000000003 1000000004 1000000005

Output
5000000015

Note:
The range of the 32-bit integer is 
(-2^31) to (2^31 - 1) or [-2147483648, 2147483647].

When we add several integer values, the resulting sum might exceed the above range. You might need to use long int C/C++/Java to store such sums.
*/

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long sum(long arr[],int n)
    {
    int i=0;
    long sum;
    while(i<n)
        {
        sum =sum+arr[i];
            i++;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    long arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%lu",&arr[arr_i]);
    }
    printf("%lu",sum(arr,n));
    return 0;
}
