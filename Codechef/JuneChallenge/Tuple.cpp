//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int p, q, r;
        cin >> p >> q >> r;
        long long int a, b, c;
        cin >> a >> b >> c;

        long long int diff1(0), diff2(0), diff3(0);
        long long int div1(0), div2(0), div3(0);
        diff1 = a - p;
        diff2 = b - q;
        diff3 = c - r;

        div1 = a / p;
        div2 = b / q;
        div3 = c / r;

        if ((diff1 == diff2 || diff1 == diff3 || diff2 == diff3) && (diff1 == 0 || diff2 == 0 || diff3 == 0))
            cout << 1 << endl;
        else if ((diff1 == diff2 && diff2 == diff3) || (div1 == div2 && div2 == div3))
            cout << 1 << endl;
        else if ((diff1 != diff2 && diff1 != diff3 && diff2 != diff3) || (div1 != div2 && div1 != div3 && div2 != div3))
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
}