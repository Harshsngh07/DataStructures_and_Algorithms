#include <iostream>
using namespace std;

int longestRepeatingSubsequence(int x, int y, string s1, string s2)
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
            if ((s1[i - 1] == s2[j - 1]) && i != j)
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[x][y];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s1;
        cin >> s1;

        string s2 = s1;
        cout << longestRepeatingSubsequence(n, n, s1, s2) << endl;
    }
    return 0;
}