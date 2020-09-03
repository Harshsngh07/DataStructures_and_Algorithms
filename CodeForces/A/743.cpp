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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxE = *max_element(a, a + n);
    int count(0);
    for (int i = 0; i < n; i++)
    {
        int x = abs(maxE - a[i]);
        count += x;
    }

    cout << count << endl;
}