#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int temp = 0, total = 0;
    for (int i = 1; i <= w; i++)
    {
        temp = i * k;
        total += temp;
    }
    if (total > n)
    {
        total -= n;
        cout << total;
    }
    else
    {
        cout << 0;
    }
}
