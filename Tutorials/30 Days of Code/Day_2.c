/*
Objective
In this challenge, you will work with arithmetic operators. Check out the Tutorial tab for learning materials and an instructional video.

Task
Given the meal price (base cost of a meal), tip percent (the percentage of the meal price being added as tip), and tax percent (the percentage of the meal price being added as tax) for a meal, find and print the meal's total cost. Round the result to the nearest integer.

Example



A tip of 15% * 100 = 15, and the taxes are 8% * 100 = 8. Print the value  and return from the function.

Function Description
Complete the solve function in the editor below.

solve has the following parameters:

int meal_cost: the cost of food before tip and tax
int tip_percent: the tip percentage
int tax_percent: the tax percentage
Returns The function returns nothing. Print the calculated value, rounded to the nearest integer.

Note: Be sure to use precise values for your calculations, or you may end up with an incorrectly rounded result.

Input Format

There are  lines of numeric input:
The first line has a double,  (the cost of the meal before tax and tip).
The second line has an integer,  (the percentage of  being added as tip).
The third line has an integer,  (the percentage of  being added as tax).

Sample Input

12.00
20
8
Sample Output

15
Explanation

Given:
, , 

Calculations:




We round  to the nearest integer and print the result, .
link : 'https://www.hackerrank.com/challenges/30-operators/problem?isFullScreen=true'
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

char* readline();


void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip=meal_cost*tip_percent/100;
    double tax=meal_cost*tax_percent/100;
    printf("%.0f", meal_cost+tip+tax);


}

int main()
{
    char* meal_cost_endptr;
    char* meal_cost_str = readline();
    double meal_cost = strtod(meal_cost_str, &meal_cost_endptr);

    if (meal_cost_endptr == meal_cost_str || *meal_cost_endptr != '\0') { exit(EXIT_FAILURE); }

    char* tip_percent_endptr;
    char* tip_percent_str = readline();
    int tip_percent = strtol(tip_percent_str, &tip_percent_endptr, 10);

    if (tip_percent_endptr == tip_percent_str || *tip_percent_endptr != '\0') { exit(EXIT_FAILURE); }

    char* tax_percent_endptr;
    char* tax_percent_str = readline();
    int tax_percent = strtol(tax_percent_str, &tax_percent_endptr, 10);

    if (tax_percent_endptr == tax_percent_str || *tax_percent_endptr != '\0') { exit(EXIT_FAILURE); }

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
