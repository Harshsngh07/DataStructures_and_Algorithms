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

int x, y;
vector<int> v, v1;
int main()
{
    int s, n, cnt(0), a[10000], b[10000];
    cin >> s >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = x;
        b[i] = y;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s > a[i])
            cnt++;
        s += b[i];
    }

    if (cnt == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}