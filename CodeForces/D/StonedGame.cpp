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

string solve(int a[], int n)
{
    if (n == 1)
        return "T";

    int sum(0);
    for (int i = 0; i < n; i++)
        sum += a[i];

    int maxE = *max_element(a, a + n);
    if (maxE * 2 > sum || (sum & 1))
        return "T";
    else
        return "HL";
}

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
        fo(0, n) cin >> a[i];
        cout << solve(a, n) << endl;
    }
}