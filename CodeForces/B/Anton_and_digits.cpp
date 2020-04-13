#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int k2, k3, k5, k6, val1 = 0, val2 = 0;
    cin >> k2 >> k3 >> k5 >> k6;
    val1 = min(k2, min(k5, k6));
    k2 -= val1;
    k5 -= val1;
    k6 -= val1;
    val2 = min(k2, k3);
    cout << val1 * 256 + val2 * 32;
}