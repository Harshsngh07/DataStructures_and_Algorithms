#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    long long n, k;
	    cin >> n >> k;
	    long long  a[n];
	    for(int i=0;i<n;i++) cin >> a[i];
	    
	    map<long long, long long > m;
	    for(int i=0;i<n;i++)
	        m[a[i]]++;
	    set<long long> s;
	    int f = 0;
	    for(auto i : m)
	    {
	        if(i.second == k)
	        {
	            s.insert(i.first);
	            f = 1;
	        }
	    }
	    
	    set<long long>::iterator it;
	    it=s.begin();
	    while(it!=s.end()){
	        cout<<*it<<" ";
	        it++;
	    }
	    if(f==0)
	    cout<<"-1";
	    cout<<endl;
	}
	return 0;
}