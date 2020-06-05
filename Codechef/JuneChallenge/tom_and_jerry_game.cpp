//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n <= 0 ? false : (n & (n - 1)) == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int ts;
        cin >> ts;
        int ans(0);
        if (isPowerOfTwo(ts))
        {
            while (ts % 2 == 0)
            {
                ts /= 2;
            }
        }
        else if (ts % 2 == 0)
        {
            while (ts % 2 == 0)
            {
                ts = ts / 2;
            
        }

        cout << ts / 2 << endl;
    }
}