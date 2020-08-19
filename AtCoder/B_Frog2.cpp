//g++  7.4.
#include <bits/stdc++.h>
using namespace std;

int dp[1000001];
int solve(int n, int k, int a[])
{   
    dp[0] = 0;    
    for(int i=1;i<n;i++)
        dp[i] = INT_MAX;
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<=i+k;j++)
        {
            if(j<n)
                dp[j] = min(dp[j], dp[i]+abs(a[i]-a[j]));
        }                    
    }
    
    return dp[n-1];
    
}

int main()
{
  
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        cout << solve(n,k,a) << endl;    
}

