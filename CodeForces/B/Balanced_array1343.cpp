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
        int a[n];
        int x=2,y=1,sumE(0),sumO(0);

        for(int i=0;i<n/2;i++)
        {
            a[i] = x;
            sumE+=a[i];
            x+=2;
        }
        for(int i=n/2;i<n;i++)
        {
            a[i] = y;
            sumO+=a[i];
            y+=2;
        }
        
        if(sumE != sumO)
             a[n-1]+=n/2;
        
        if(n%4==0)
        { 
            cout<<"YES" <<endl;
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl; 
        }else
            cout<<"NO"<<endl;
        
     }
}
