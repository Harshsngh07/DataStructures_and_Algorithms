//g++  7.4.0
// partially correct
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

ll power(ll x,ll y) 
{ 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return (temp*temp) % mod; 
    else
        return (x*temp*temp) % mod; 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        ll ans[n];
        memset(ans, 0 , sizeof(ans));
        for(int i=n-1; i>=0;i--)
        {
            ans[i] = power(2, i);
        }
        
        for(int i=n-1;i>=0;i--)
            cout << ans[i] << " " ;
        
        cout << endl;
    }
}