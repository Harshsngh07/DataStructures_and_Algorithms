#include <iostream>
using namespace std;

int solve(int n)
{
    if (n == 0)
        return 1;

    return solve(n - 1) - n + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}