/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define vec vector<int>

typedef long long ll;

string f(string s, int x)
{
    int n = s.length();
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (i - x >= 0 && s[i - x] == '1')
            ans += '1';
        else if (i + x <= n && s[i + x] == '1')
            ans += '1';
        else
            ans += '0';
    }
    return ans;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x;
        cin >> x;
        int n = s.length();
        string ans = string(n, '1');

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (i - x >= 0)
                    ans[i - x] = '0';
                if (i + x <= n)
                    ans[i + x] = '0';
            }
        }

        if (f(ans, x) == s)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
}