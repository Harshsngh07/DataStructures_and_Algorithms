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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (0, n)
            cin >> a[i];
        reverse(a, a + n);
        for (0, n)
            cout << a[i] << " ";
        cout << endl;
    }
}