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
	    for(ll i=0;i<n;i++) { 
	        if(i>=2) {
	            a[i] = max(a[i-1], a[i]+a[i-2]);
	        } 
	        else if(i==1){
	            a[i] = max(a[i],a[i-1]);
	        }
	    }
	        
	    
	    for(ll i=0;i<n;i++) cout << a[i] << " " ;
	    cout << endl;
	}
	return 0;
}