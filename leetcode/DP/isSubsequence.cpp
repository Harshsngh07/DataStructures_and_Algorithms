class Solution
{
public:
    int lcs(int x, int y, string s1, string s2)
    {

        int dp[x + 1][y + 1];

        for (int i = 0; i < x + 1; i++)
            dp[i][0] = 0;
        for (int i = 1; i < y + 1; i++)
            dp[0][i] = 0;

        for (int i = 1; i < x + 1; i++)
        {
            for (int j = 1; j < y + 1; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[x][y];
    }

    bool isSubsequence(string s, string t)
    {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int LCS = lcs(s.length(), t.length(), s, t);

        if (LCS == s.length())
            return true;
        return false;
    }
};
