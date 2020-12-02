#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    ll a[n];
	    for(ll i=0;i<n;i++) cin >> a[i];
	    ll ans(0);
	    vector<int> v;
	    for(ll i=0;i<n;i++)
	    {
	        int x = a[i]-i;
	        v.push_back(x);
	    }
	    int max = *max_element(v.begin(), v.end());
	    int min = *min_element(v.begin(), v.end());
	    ans = max-min; 
	    cout << ans << endl;
	}
	return 0;
}