//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        
        int x = 100 - s;
        int def(100), fwd(100);
        for(int i=0;i<n;i++)
        {       
           if(b[i] == 0)
               def = min(def,a[i]);
            else
                fwd = min(fwd,a[i]);
        }
               
        if(def+fwd<=x)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }
}
