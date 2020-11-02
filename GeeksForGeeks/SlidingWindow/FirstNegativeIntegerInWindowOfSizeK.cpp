#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll n, ll a[], ll k)
{
    deque<ll> dq;
    int i;
    for(i=0;i<k;i++)
    {
        if(a[i]<0)
            dq.push_back(i);
    }
    
    for(;i<n;i++)
    {
        if(!dq.empty())
            cout << a[dq.front()] << " ";
        else    
            cout << 0 << " ";
        
        while((!dq.empty() && dq.front() <(i-k+1)))
            dq.pop_front();
            
        if(a[i]<0)
            dq.push_back(i);
    }
    
    if(!dq.empty())
        cout << a[dq.front()] << " ";
    else
        cout << 0 << " ";
}

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    ll n, k;
	    cin >> n;
	    ll a[n];
	    for(ll i=0;i<n;i++) cin >> a[i];
	    cin >> k;
	    solve(n,a,k);
	    cout<<endl;
	}
	return 0;
}