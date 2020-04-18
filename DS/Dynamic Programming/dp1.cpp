#include <bits/stdc++.h>
using namespace std;

//fib functions returns that nth element in the fibonacci series.
int fib(int n)
{
    //base case
    if (n == 0 or n == 1)
        return n;
    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}