void dfs(int A[][SIZE], int x, int y, int r, int c, int &ans)
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

int findMaxArea(int N, int M, int A[SIZE][SIZE])
{
    int ans(0), curr(0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            curr = 0;
            if (A[i][j] == 1)
            {
                dfs(A, i, j, N, M, curr);
                ans = max(ans, curr);
            }
        }
    }
    return ans;
}