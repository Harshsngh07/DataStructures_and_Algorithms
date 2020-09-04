/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define for (a, b) for (int i = a; i < b; i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    string s;
    cin >> s;
    string ans;
    int l = s.length();

    for (0, l)
    {
        if (s[i] == '.')
            ans += '0';
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans += '1';
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            ans += '2';
            i++;
        }
    }
    cout << ans << endl;
}