/* Author: Harsh Singh */

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define for(a,b) for(int i=a;i<b;i++)
#define vec vector<int>

typedef long long ll;

ll solve(ll a, ll b, ll x, ll y, ll n)
{
    ll use_a = min(n, a-x);
    a -= use_a;
    n -= use_a;
    
    ll use_b = min(n, b-y);
    b -= use_b;
    n -= use_b;
    
    return a*b;
}

int main()
{
    FIO;
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;
        cout << min(solve(a,b,x,y,n), solve(b,a,y,x,n))<<endl;
    }
}