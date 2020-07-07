// its simple basically do 
// string length - LPS
// LPS = LCS(s, rev(s))

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

    int longestPalindromeSubseq(string s)
    {
        int n = s.length();
        string s1 = s;
        int m = s1.length();
        reverse(s1.begin(), s1.end());

        return lcs(n, m, s, s1);
    }

    int minInsertions(string s)
    {
        int x = s.length();

        return x - longestPalindromeSubseq(s);
    }
};
