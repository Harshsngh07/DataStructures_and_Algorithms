// recursive code takes 2^n time so no a good solution

int lcs(int x, int y, string s1, string s2){
    
    if(x==0 || y==0 )
        return 0;
    
    if(s1[x-1]==s2[y-1])
            return 1+lcs(x-1,y-1,s1,s2);
    return max(lcs(x,y-1,s1,s2),lcs(x-1,y,s1,s2));
    
}


//optimised code memoised code or bottom up approach better than recursive but gives TLE 

int dp[101][101];
memset(dp, -1, sizeof(dp));
int lcs(int x, int y, string s1, string s2)
{

    if (x == 0 || y == 0)
        return 0;

    if (dp[x][y] != -1)
        return dp[x][y];

    if (s1[x - 1] == s2[y - 1])
        dp[x][y] = 1 + lcs(x - 1, y - 1, s1, s2);
    else
        dp[x][y] = max(lcs(x, y - 1, s1, s2), lcs(x - 1, y, s1, s2));

    return dp[x][y];
}

//topdown approach
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
