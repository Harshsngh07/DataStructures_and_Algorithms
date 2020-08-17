#include <bits/stdc++.h>
using namespace std;
int binomial(int x, int k, int n)
{

    int ans = 0, r = 1;
    for (int i = 1; i <= k; i++)
    {
        r *= x - i + 1;
        r = r / i;
        ans = ans + r;
        if (ans >= n)
            break;
    }
    return ans;
}
int minTrials(int k, int n)
{
    int low = 1, high = n;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (binomial(mid, k, n) < n)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;
        cout << minTrials(k, n) << endl;
    }
}