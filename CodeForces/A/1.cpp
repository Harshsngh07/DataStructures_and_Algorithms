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

    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = ((m+a-1)/a)*((n+a-1)/a);
    cout << ans << endl;
}