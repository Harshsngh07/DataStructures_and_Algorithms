#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        int mod = 1000000007;
        long long int arr[n];
        long long int profit = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            profit += max(0ll, arr[i] - i);
            // cout << arr[i];
        }
        cout << profit % mod << endl;
    }
}