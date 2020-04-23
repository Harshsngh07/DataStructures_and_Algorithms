//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int count(0);
        int p[n],c[n];
         for(int i=0;i<n;i++)
             cin>>p[i]>>c[i];
         
         for(int i=1;i<n;i++)
         {
             if((p[i]>=c[i] && p[i]>=p[i-1]) && (c[i]>=c[i-1]))
                 count++;
         }
    
        if(count == n-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
