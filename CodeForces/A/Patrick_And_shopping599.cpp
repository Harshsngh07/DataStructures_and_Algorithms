#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, d2, d3, r, r1, r2, r3;
    cin >> d1 >> d2 >> d3;
    r = d1 + d2 + d3;
    r1 = min(r, (d1 + d2) * 2);
    r2 = min(r, (d2 + d3) * 2);
    r3 = min(r, (d3 + d1) * 2);
    cout << min(min(r1, r2), min(r2, r3));
}