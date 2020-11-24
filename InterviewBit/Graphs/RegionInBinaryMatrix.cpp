
void dfs(vector<vector<int>> &A, int x, int y, int r, int c, int &ans)
{
    if (x < 0 || x >= r || y < 0 || y >= c || A[x][y] != 1)
        return;

    ans++;
    A[x][y] = 0;

    dfs(A, x + 1, y, r, c, ans);     //down
    dfs(A, x - 1, y, r, c, ans);     //up
    dfs(A, x, y + 1, r, c, ans);     //right
    dfs(A, x, y - 1, r, c, ans);     //left
    dfs(A, x + 1, y + 1, r, c, ans); //left
    dfs(A, x + 1, y - 1, r, c, ans); //left
    dfs(A, x - 1, y + 1, r, c, ans); //left
    dfs(A, x - 1, y - 1, r, c, ans); //left
}

int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    if (n == 0)
        return 0;
    int m = A[0].size();
    int ans(INT_MIN), cnt(0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cnt = 0;
            if (A[i][j] == 1)
            {
                dfs(A, i, j, n, m, cnt);
                ans = max(ans, cnt);
            }
        }
    }
    return ans;
}
