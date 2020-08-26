#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    int n, temp = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        temp += a[i];
    cout << "temp = " << temp << endl;
    if (temp % 2 == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    // }
}