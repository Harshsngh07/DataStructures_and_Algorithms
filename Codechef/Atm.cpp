#include <bits/stdc++.h>
using namespace std;

int main()
{
    int withdraw;
    float initialBal;
    cin >> withdraw >> initialBal;

    if (withdraw % 5 == 0 && withdraw + 0.5 < initialBal)
        initialBal -= (withdraw + 0.5);

    cout << fixed << setprecision(2) << initialBal;
}