#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll a[], ll n)
{
    ll low(0), high(n-1);
    while(low<=high)
    {
        ll mid = low + (high-low)/2;
        if(a[mid]==1 && (mid==0 || a[mid-1]==0))
            return mid;
        else if(a[mid]==1)
            high = mid-1;
        else
            low = mid + 1;
    }
    return -1;
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
	    for(ll i=0;i<n;i++) cin >> a[i];
	    cout << solve(a,n)<<endl;
	}
	return 0;
}