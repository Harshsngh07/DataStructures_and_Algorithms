//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int  n, k, l, c, d, p, nl, np;
    cin >>  n>> k>> l>> c>> d>> p>> nl>> np;
    
    int maxQty = k*l;
    int toast = maxQty/nl;
    int slices = c*d;
    int salt = p/np;
    
    int ans = min(toast,min(slices,salt))/n;
    cout<<ans<<endl;
    
   
}
