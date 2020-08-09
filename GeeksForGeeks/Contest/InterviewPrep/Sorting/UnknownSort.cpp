#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> &p1, pair<int,int> &p2)
{
    if(p1.second==p2.second)
        return p1.first > p2.first;
    return p1.second > p2.second;
}


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
	    int k;
	    cin >> k;
	    
	    vector<pair<int,int>> v;
	    
	    sort(a,a+n,greater<int>());
	    
	    for(int i=0;i<n;i++)
	    {
	        int x = a[i]%k;
	        v.push_back({a[i],x});
	    }
	    
	    sort(v.begin(), v.end(), compare);
	    
	    for(auto i: v)
	        cout << i.first <<" ";
	    cout << endl;
	    
	}
	return 0;
}