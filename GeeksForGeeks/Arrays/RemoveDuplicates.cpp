#include<bits/stdc++.h>
using namespace std;

int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    map<int, bool> m;
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        if(m.find(a[i])==m.end())
	            cout<< a[i]<<" ";
	        m[a[i]] = true;
	    }
	    cout <<endl;
	}
	return 0;
}