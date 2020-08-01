#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int x = max(n, m);

        for (int i = 0; i < x; i++)
        {
            if (i < n && i < m)
                cout << a[i] << " " << b[i] << " ";
            else if (i < n)
                cout << a[i] << " ";
            else if (i < m)
                cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
