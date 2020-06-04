//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int removeZeroes(int n)
{
    int sum(0);
    int ten(1);
    while (n)
    {
        int rem = n % 10;
        n /= 10;
        if (rem)
        {
            sum += rem * ten;
            ten *= 10;
        }
    }

    return sum;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int c = a + b;

    if (removeZeroes(c) == removeZeroes(a) + removeZeroes(b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}