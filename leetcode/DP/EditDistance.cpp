class Solution
{
public:
    int ED(string s1, string s2, int m, int n)
    {
        int dp[m + 1][n + 1];

        for (int i = 0; i <= m; i++)
            dp[i][0] = i;
        for (int i = 0; i <= n; i++)
            dp[0][i] = i;

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 + min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]);
            }
        }

        return dp[m][n];
    }

    int minDistance(string word1, string word2)
    {
        int m = word1.length();
        int n = word2.length();

        return ED(word1, word2, m, n);
    }
};