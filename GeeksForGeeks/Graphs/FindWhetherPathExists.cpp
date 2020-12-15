void dfs(vector<vector<int>> &M, vector<vector<bool>> &vis, int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] == true || M[i][j] == 0)
        return;

    vis[i][j] = true;
    dfs(M, vis, i + 1, j, n, m);
    dfs(M, vis, i - 1, j, n, m);
    dfs(M, vis, i, j + 1, n, m);
    dfs(M, vis, i, j - 1, n, m);
}

bool is_possible(vector<vector<int>> &M, int N)
{
    int n = M.size();
    int m = M[0].size();
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int a, b, dx, dy;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (M[i][j] == 1)
            {
                a = i;
                b = j;
            }
            else if (M[i][j] == 2)
            {
                dx = i;
                dy = j;
            }
        }
    }
    dfs(M, vis, a, b, n, m);
    return vis[dx][dy];
}