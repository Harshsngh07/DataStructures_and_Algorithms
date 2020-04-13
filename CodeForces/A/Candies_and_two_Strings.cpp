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
        int a = 0, b = 0, val = 0;
        if (n > 2)
        {
            if (n % 2 == 0)
            {
                val = n / 2;
                a = val + 1;
                b = val - 1;
            }
            else
            {
                val = n / 2;
                a = val + n % 2;
                b = val;
            }
        }
        cout << b << endl;
    }
}