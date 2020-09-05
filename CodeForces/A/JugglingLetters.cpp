/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define fo(a, b) for (int i = a; i < b; i++)
#define vec vector<int>

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
        string s[n];

        unordered_map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            for (auto c : s[i])
                m[c]++;
        }
        int cnt(0);
        for (auto i : m)
        {
            if (i.second % n != 0)
                cnt++;
        }

        if (cnt == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}