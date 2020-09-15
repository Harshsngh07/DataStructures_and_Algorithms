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
        ll n;
        cin >> n;
        string s = to_string(n);
        ll l = s.length();
        string ans;
        for(int i=0;i<l;i++)
        {
            ll x = s[i]; 
            x -= 2;
            ans += x;
        }
        ll x = stoi(ans);
        cout << x << endl;
    }
}