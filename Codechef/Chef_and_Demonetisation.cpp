#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--)
	{
	    long long s, n, ans = 0;
	    
	    cin >> s >> n;
	    
	    if(s%2 == 1)
	    {
	        ans++;
	        s--;
	    }
	    
	    while(true)
	    {
	        ans+= s/n;
	        s = s%n;
	        n = s;
	        if(n == 0) break;
	    }
	    
	    cout << ans << endl;
	}
	
	
	return 0;
}
