//g++  5.4.0
//partially correct
#include <bits/stdc++.h>
using namespace std;


int minSwaps(int arr[], int n)
{
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].first = arr[i];
        v[i].second = i;
    }
    
    sort(v.begin(),v.end());
    
    int ans(0);
    
    for(int i=0;i<n;i++)
    {
        if(v[i].second == i)
            continue;
        else
        {
            swap(v[i].first, v[v[i].second].first);
            swap(v[i].second , v[v[i].second].second);
        }
        
        if(i!=v[i].second)
            --i;
        ans++;
    }
    return ans;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m,x,y;
        cin >> n>> m;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        while(m--)
        {
            cin >> x >> y;
        }
        cout << minSwaps(a,n)<<endl;
    }
}
