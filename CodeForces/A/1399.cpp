/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef long long ll;

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int count(0);
        sort(v.begin(), v.end());
        for (int i = 0; i < n - 1; i++)
        {
            int x = abs(v[i] - v[i + 1]);

            if (x <= 1)
                count++;
        }

        if (v.size() - count == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}