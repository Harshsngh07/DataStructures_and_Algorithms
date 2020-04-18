#include <bits/stdc++.h>
using namespace std;

//fib functions returns that nth element in the fibonacci series.
int fib(int n, int dp[])
{
    //base case
    if (n == 0 or n == 1)
        return n;

    //look up recursion + memoisation
    if (dp[n] != 0)
        return dp[n];

    int ans = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n] = ans;
}

int main()
{
    int n;
    cin >> n;
    int dp[100] = {0};
    cout << fib(n, dp);
}