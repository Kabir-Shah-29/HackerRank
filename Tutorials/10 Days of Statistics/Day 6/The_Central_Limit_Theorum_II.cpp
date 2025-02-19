/*
The Central Limit Theorem II

link : https://www.hackerrank.com/challenges/s10-the-central-limit-theorem-2/problem?isFullScreen=true
*/

#include <bits/stdc++.h>
using namespace std;

double cumulativeProbability(double x, double meu, double sigma)
{
    return 0.5 * (1 + erf((x-meu)/(sigma * sqrt(2))));
}

int main(void)
{
    int x, n;
    double meu, sigma;
    cin >> x;
    cin >> n;
    cin >> meu;
    cin >> sigma;


    cout << fixed << setprecision(4) << cumulativeProbability(x, n*meu, sqrt(n)*sigma) << endl;

    return 0;
}
