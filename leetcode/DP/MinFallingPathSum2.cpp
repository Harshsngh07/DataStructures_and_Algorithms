class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int dp[n][m];

        for (int i = 0; i < m; i++)
            dp[n - 1][i] = matrix[n - 1][i];

        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j < m; j++)
            {
                dp[i][j] = matrix[i][j];
                int temp = INT_MAX;
                for(int k=0;k<n;k++)
                {
                    if(k!=j)
                        temp=min(temp,dp[i+1][k]);
                }
                dp[i][j]+=temp;
            }
        }

        int ans(INT_MAX);

        for (int i = 0; i < m; i++)
            ans = min(ans, dp[0][i]);

        return ans;        
    }
};