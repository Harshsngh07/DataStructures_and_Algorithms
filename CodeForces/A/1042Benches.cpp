//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maxV = *max_element(a, a + n);
    int maxAns = maxV + m;
    while (m--)
    {
        int minV = min_element(a, a + n) - a;
        a[minV] += 1;
    }

    int newMax = *max_element(a, a + n);
    cout << newMax << " " << maxAns << endl;
}