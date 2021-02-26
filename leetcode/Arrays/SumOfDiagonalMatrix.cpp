class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int ans(0);
        for (int i = 0; i < n; i++)
        {
            ans += mat[i][i];
        }
        int i = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            ans += mat[i][j];
            i++;
        }
        if (n % 2 == 1)
            ans -= mat[n / 2][n / 2];

        return ans;
    }
};