#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isValid(ll a[], ll n, ll m, ll sum)
{
    ll s = 1;
    ll total = 0;
    
    for(ll i=0;i<n;i++)
    {
        if(total+a[i] > sum)
        {
            s++;
            total = a[i];
            
            if(s>m) return false;
        }
        else
            total+=a[i];
        
    }
    
    return true;
}

ll solve(ll a[],ll n, ll m)
{
        if(m>n) return -1;
        ll sum(0);
	    sum = accumulate(a,a+n,sum);
	    ll start = *max_element(a,a+n);
	    ll end = sum;
	    ll res = start;
	    
	    while(start<=end)
	    {
	        ll mid = (start+end)/2;
	        if(isValid(a,n,m,mid))
	        {
	            res = mid;
	            end = mid-1;
	        }
	        else
	            start = mid + 1;
	    }
	   
	   return res;
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
	    for(ll i=0;i<n;i++)
	        cin >>a[i];
	    ll m;
	    cin >> m;
	    
	    cout <<solve(a,n,m)<<endl;
	}
	return 0;
}