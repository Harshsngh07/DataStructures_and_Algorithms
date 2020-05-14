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
        
        long long int ans(0);
        
        for(long long int i=1;i<=n/2;i++)
        {
            ans+=(2*i + 1)*i;
            ans+=(2*i + 1)*i;
            
            ans+=(2*i + 1 -2)*i;
            ans+=(2*i + 1 -2)*i;
        }
        cout<< ans<<endl;
    }
}