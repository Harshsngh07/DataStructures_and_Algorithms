//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
     long long int t;
    cin >> t;
    while(t--)
    {
        long long int n,q;
        cin >> n>>q;
        string s; cin >> s;
        map<char , int> m;
        
        
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        
        map<char,int> :: iterator it;
        
        int total(0);
        //int a[q];
        while(q--)
        {   
            long long int x;
            cin >> x;
        
       
        
                for(int j=0;j<x;j++)
                {
                   for( it=m.begin();it!=m.end();++it)
                       it->second -= 1;
                   
                    
                }
                 for( it=m.begin();it!=m.end();++it)
                      total+=it->second;
            
                if(total<0)
                    cout<<0<<endl;
                else
                    cout<<total<<endl;
        }
        
        //cout<<fabs(total)<<endl;
    }
    
}
