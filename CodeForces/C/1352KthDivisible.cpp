//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long int n, k;
        cin >> n >> k;

        long long low = 1, high = INT_MAX, mid;
        while (low < high)
        {
            mid = low + (high - low) / 2;
            long count = mid - (mid / n);
            if (count < k)
                low = mid + 1;
            else
                high = mid;
        }

        cout << low << endl;
    }
}