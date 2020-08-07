//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long h, p;
        cin >> h >> p;
        
        while(h>0 && p>0)
        {
            h -= p;
            p /= 2;
        }
        
        if(h<=0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}