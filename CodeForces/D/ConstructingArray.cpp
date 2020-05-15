//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        
        priority_queue<pair<int,pair<int,int>>> p;
        
        p.push({n,{-1,-n}});
        int count(1);
        
        while(!p.empty())
        {
            int l = -p.top().second.first;
            int r = -p.top().second.second;
            p.pop();
            
            int mid = (l+r)/2;
            a[mid] = count++;
            if(l==r) continue;
            
            if(l<mid)
                p.push({mid-l,{-l , -(mid-1)}});
            
            if(mid<r)
                p.push({r-mid,{-(mid+1),-r}});
            
        }
        
        
        for(int i=1;i<=n;i++)
           cout<<a[i]<<" ";  
        cout<<endl;
    }
}
