#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int max_dominos = 0;
    if (m % 2 == 0)
    {
        if (n % 2 == 0)
            max_dominos = m * n / 2;
        else
            max_dominos = m * n / 2;
    }
    else
    {
        if (n % 2 == 0)
            max_dominos = m * n / 2;
        else
            max_dominos = m * n / 2;
    }

    cout << max_dominos;
}