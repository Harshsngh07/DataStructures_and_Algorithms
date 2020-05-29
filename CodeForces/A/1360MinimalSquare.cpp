//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a>>b;
        int ans = pow(min(max(2*a,b),max(2*b,a)),2);
        cout << ans << endl;
    }
}