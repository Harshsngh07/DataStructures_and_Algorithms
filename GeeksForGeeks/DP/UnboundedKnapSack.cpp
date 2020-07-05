//rod cutting problem is based on this unbounded knapsack problem basically its same to same to this problem.


#include<bits/stdc++.h>
using namespace std;

int unboundedKnapSack(int W, int N,int val[], int wt[] )
{
    int dp[N+1][W+1];
    
    for(int i=0;i<N+1;i++)
        dp[i][0] = 0;
    for(int i=1;i<W+1;i++)
        dp[0][i] = 0;
    
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<W+1;j++)
        {
            if(wt[i-1]<=j)
                dp[i][j] = max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    
    return dp[N][W];
    
}


int main()
 {
	int t;
	cin >> t;
	while(t--)
	{
	    int n,w;
	    cin >> n >> w;
	    int val[n];
	    int wt[n];
	    for(int i=0;i<n;i++) cin>> val[i];
	    for(int i=0;i<n;i++) cin>> wt[i];
	    
	    cout<<unboundedKnapSack(w,n,val,wt)<<endl;
	}
	return 0;
}