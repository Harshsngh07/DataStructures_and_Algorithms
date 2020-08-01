#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ups(0), downs(0);
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[i + 1] && a[i] > a[i - 1])
                ups++;
            if (a[i] < a[i + 1] && a[i] < a[i - 1])
                downs++;
        }

        cout << ups << " " << downs << endl;
    }
    return 0;
}