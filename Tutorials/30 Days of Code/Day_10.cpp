/*
Objective
Today, we're working with binary numbers. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given a base- integer, , convert it to binary (base-). Then find and print the base- integer denoting the maximum number of consecutive 's in 's binary representation. When working with different bases, it is common to show the base as a subscript.

Example

The binary representation of  is . In base , there are  and  consecutive ones in two groups. Print the maximum, .

Input Format

A single integer, .

Constraints

Output Format

Print a single base- integer that denotes the maximum number of consecutive 's in the binary representation of .

Sample Input 1

5
Sample Output 1

1
Sample Input 2

13
Sample Output 2

2
Explanation

Sample Case 1:
The binary representation of  is , so the maximum number of consecutive 's is .

Sample Case 2:
The binary representation of  is , so the maximum number of consecutive 's is .

link : 'https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true'
*/

#include <bits/stdc++.h>

using namespace std;



int main()
{
  int n;
    int reminder=0;
    int count=0;
    int max=0;
    cin>>n;

        while(n!=0)
        {
        reminder=n%2;
        n=n/2;

        if(reminder==1)
        {
            count++;
        }
        else
        {
        count=0;
        }   
        if(count>max)
        {
        max=count;
        }
        }
         cout<<max;


    return 0;
}
