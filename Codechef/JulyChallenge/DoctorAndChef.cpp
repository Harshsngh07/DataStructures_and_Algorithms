#include <bits/stdc++.h>
using namespace std;

#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

long long next(vector<long long> &arr, long long target, long long end)
{
    long long start = 0;

    long long ans = -1;
    while (start <= end)
    {
        long long mid = (start + end) / 2;

        // Move to right side if target is
        // greater.
        if (arr[mid] <= target)
            start = mid + 1;

        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans - 1;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<long long> v;
        for (int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            v.push_back(a);
        }

        long long days(0);
        long long temp;

        long long maxE = *max_element(v.begin(), v.end());
        sort(v.begin(), v.end());
        int size = v.size();

        while (x < maxE)
        {

            if (x < v[0])
            {
                days++;
                x = 2 * x;
            }
            else
            {
                temp = next(v, x, size - 1);
                long long h = v[temp];

                if (h * 2 >= x)
                {
                    days++;
                    x = 2 * h;
                    v.erase(v.begin() + temp);
                }
                else
                {
                    days++;
                    x = 2 * x;
                }
            }
        }

        cout << days + v.size() << endl;
    }
}
