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
        int a[n];
        int orgSum(0);
        for(int i=0;i<n;i++) 
        {
            cin >> a[i]; 
            orgSum+= a[i];
        }
        
        int newSum(0);

        for(int i=0;i<n;i++)
        {
            if(a[i]>=k)
                a[i] = k;
            
            newSum += a[i];
        }
        
        int ans = orgSum - newSum;
        
        cout << ans<<endl;
        
        
    }
}