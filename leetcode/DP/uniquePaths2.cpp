class Solution {
public:
    
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        int dp[n][m];
        if(a[0][0]==1 || a[n-1][m-1]==1)
            return 0;
        dp[0][0] = 1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i][0]==1)
                dp[i][0] = 0;
            else
                dp[i][0] = dp[i-1][0];
        }
        
        for(int i=1;i<m;i++)
        {
            if(a[0][i]==1)
                dp[0][i] = 0;
            else
                dp[0][i] = dp[0][i-1];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(a[i][j] == 1)
                    dp[i][j] = 0;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
        return dp[n-1][m-1];
    }
};