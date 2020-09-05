/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fo(a,b) for(int i=a;i<b;i++)
#define vec vector<int>

typedef long long ll;

int main()
{
    FIO;
    int t;
    cin >> t;
    while(t--)
    {
       ll n, x;
       cin >> n >> x;
       ll a[n];
       fo(0,n) cin >> a[i];
       ll ans(0);
       sort(a,a+n);
       ll sum(0);
       ll j = 0; 
       for(int i=n-1;i>=0;i--)
       {
           sum += a[i];
           j++;
           if((sum/j)>=x)
               ans++;
       }
        
       cout << ans << endl; 
    }
}