//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin >> b[i];
        
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        
        int sum(0);
        
          for(int i=0;i<k;i++)  
          {
              if(b[i]>a[i])
                  swap(b[i],a[i]);
          }
          
        
        for(int i=0;i<n;i++)
            sum+=a[i];
        cout<<sum<<endl;
    }
}
