/*
Objective
Today we're discussing scope. Check out the Tutorial tab for learning materials and an instructional video!

The absolute difference between two integers,  and , is written as . The maximum absolute difference between two integers in a set of positive integers, , is the largest absolute difference between any two integers in .

The Difference class is started for you in the editor. It has a private integer array () for storing  non-negative integers, and a public integer () for storing the maximum absolute difference.

Task
Complete the Difference class by writing the following:

A class constructor that takes an array of integers as a parameter and saves it to the  instance variable.
A computeDifference method that finds the maximum absolute difference between any  numbers in  and stores it in the  instance variable.
Input Format

You are not responsible for reading any input from stdin. The locked Solution class in the editor reads in  lines of input. The first line contains , the size of the elements array. The second line has  space-separated integers that describe the  array.

Constraints

, where 
Output Format

You are not responsible for printing any output; the Solution class will print the value of the  instance variable.

Sample Input

STDIN   Function
-----   --------
3       __elements[] size N = 3
1 2 5   __elements = [1, 2, 5]
Sample Output

4
Explanation

The scope of the  array and  integer is the entire class instance. The class constructor saves the argument passed to the constructor as the  instance variable (where the computeDifference method can access it).

To find the maximum difference, computeDifference checks each element in the array and finds the maximum difference between any  elements: 


The maximum of these differences is , so it saves the value  as the  instance variable. The locked stub code in the editor then prints the value stored as , which is .

link : 'https://www.hackerrank.com/challenges/30-scope/problem?isFullScreen=true'
*/



    // Add your code here
    Difference (
        vector<int> elements_
    ) :
        elements(elements_),
        maximumDifference(0)
    {}

    void computeDifference () {
        int lowest_value = 0x7FFFFFFF;
        int highest_value = 0x80000000;
        
        for (auto &element : elements) {
            lowest_value = (( element < lowest_value ) * element) + ( element >= lowest_value ) * lowest_value;
            highest_value = (( element > highest_value ) * element) + ( element <= highest_value ) * highest_value;
        }
        
        maximumDifference = (highest_value - lowest_value);
    }
