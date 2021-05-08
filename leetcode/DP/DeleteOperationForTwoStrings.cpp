class Solution
{
public:
    int lcs(string x, string y, int n, int m)
    {
        int dp[n + 1][m + 1];

        for (int i = 0; i < n + 1; i++)
            dp[i][0] = 0;
        for (int i = 1; i < m + 1; i++)
            dp[0][i] = 0;

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (x[i - 1] == y[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[n][m];
    }

    int minDistance(string word1, string word2)
    {
        int length = lcs(word1, word2, word1.length(), word2.length());
        return word1.length() + word2.length() - 2 * length;
    }
};