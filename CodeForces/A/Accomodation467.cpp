#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[n], q[n];
    for (int i = 0; i < n; i++)
        cin >> p[i] >> q[i];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] < q[i])
            if (q[i] - p[i] >= 2)
                count++;
    }
    cout << count;
}