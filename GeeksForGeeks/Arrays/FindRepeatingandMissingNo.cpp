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
	    
	    int repeat(0), missing(0);
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[abs(a[i])-1]>0)
	            a[abs(a[i])-1] *= -1;
	        else
	            repeat  = abs(a[i]);
	    }
	    
	    for(int i=0;i<n;i++)
	        if(a[i]>0)
	            missing = i+1;
	    
	    cout << repeat<< " " << missing << endl;
	}
	return 0;
}