//g++  7.4.0

#include <bits/stdc++.h>
using namespace std;

 

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        
        long long sum(0);
        
        for(int i=0;i<n-1;i++)
            sum += abs(a[i]-a[i+1]);
        
        cout << sum-(n-1)<<endl;
    }
}