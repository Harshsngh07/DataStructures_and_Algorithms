#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll kadane(ll a[], ll n)
{
    ll res = a[0], maxEnding = a[0];
    for(ll i=1;i<n;i++)
    {
        maxEnding = max(a[i], maxEnding+a[i]);
        res = max(res, maxEnding);
    }
    
    return res;
}


ll maxSubarraySum(ll a[], ll n)
{
    ll maxNormal = kadane(a,n);
    if(maxNormal<0) return maxNormal;
    
    ll arrSum = 0;
    for(ll i = 0;i<n;i++)
    {
        arrSum += a[i];
        a[i] = -a[i];
    }
    
    ll maxCircular = arrSum + kadane(a,n);
    
    return max(maxNormal, maxCircular);
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
	    cout << maxSubarraySum(a,n)<<endl;
	}
	return 0;
}