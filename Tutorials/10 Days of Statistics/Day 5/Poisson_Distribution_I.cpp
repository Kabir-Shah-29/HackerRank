/*
Poisson Distribution I

link : https://www.hackerrank.com/challenges/s10-poisson-distribution-1/problem?isFullScreen=true
*/

#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    return n * factorial(n - 1);
}

double poissonDistribution(double gamma, int k)
{
    return (pow(gamma, k)*exp(-gamma))/factorial(k);
}

int main(void)
{
    double gamma;
    int k;
    cin >> gamma;
    cin >> k;

    cout << fixed << setprecision(3) << poissonDistribution(gamma, k) << endl;

    return 0;
}
