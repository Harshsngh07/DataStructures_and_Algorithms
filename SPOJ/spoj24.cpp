// FCTRL2 - Small factorials
// #math #big-numbers
// You are asked to calculate factorials of some small positive integers.

// Input
// An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

// Output
// For each integer n given at input, display a line with the value of n!

// Example
// Sample input:
// 4
// 1
// 2
// 5
// 3
// Sample output:

// 1
// 2
// 120
// 6

#include <iostream>
using namespace std;

long double factorial(long double n)
{
    long double fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    // your code here
    int t;
    cin >> t;
    long int input[t];
    for (int i = 0; i < t; i++)
    {
        cin >> input[i];
    }

    for (int i = 0; i < t; i++)
    {
        cout << factorial(input[i]) << endl;
    }

    return 0;
}
