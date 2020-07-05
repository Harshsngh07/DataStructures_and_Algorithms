//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

#define um unordered_map<long long, long long>

int main()
{
   long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n],b[n];
        long long mi = (long long)1e10;
        um m1;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            m1[a[i]]++;
            mi =  min(mi, a[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
            m1[b[i]]++;
            mi =  min(mi, b[i]);
        }
        
        um m2;
        
        bool ind = 1;
        for(auto i : m1)
        {
            if(i.second % 2)
            {
                ind = 0;
                break;
            }
            else
                m2[i.first] = i.second/2;
        }
               
        if(!ind) 
        {
            cout << -1 << endl;
            continue;
        }
                   
        um m3 = m2;
        vector<long long> v1,v2;
        
        for(int i=0;i<n;i++)
        {
            if(m3[a[i]])
                m3[a[i]]--;
            else
                v1.push_back(a[i]);
        }
        
        m3 = m2;
        for(int i=0;i<n;i++)
        {
            if(m3[b[i]])
                m3[b[i]]--;
            else
                v2.push_back(b[i]);
        }       
               
        if(v1.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        
               
        if(v1.size() != v2.size())
        {
            cout << -1 << endl;
            continue;
        }
        
        
        long long ans = 0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(),greater<>());
       
        for(int i=0;i<v1.size();i++)
            ans += min(2*mi, min(v1[i], v2[i]));
               
        cout << ans << endl;
    }
}
