//Backtracking solution
class Solution
{
public:
    bool isSafe(vector<vector<int>> &grid, int i, int j, int n, int m)
    {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
            return false;
        return true;
    }

    int backtrack(vector<vector<int>> &grid, int i, int j, int n, int m)
    {
        int p(0), temp(0);
        if (isSafe(grid, i, j, n, m))
        {
            temp = grid[i][j];
            grid[i][j] = 0;
            p = max(p,backtrack(grid, i + 1, j, n, m));
            p = max(p,backtrack(grid, i - 1, j, n, m));
            p = max(p,backtrack(grid, i, j + 1, n, m));
            p = max(p,backtrack(grid, i, j - 1, n, m));
            grid[i][j] = temp;
        }
        return p + temp;
    }

    int getMaximumGold(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int ans(0);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                ans = max(ans, backtrack(grid, i, j, n, m));
        return ans;
    }
};

//DFS solution
class Solution
{
public:
    bool isSafe(vector<vector<int>> &grid, int n, int m, int i, int j, vector<vector<bool>> &vis)
    {
        return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j]);
    }

    void dfs(vector<vector<int>> &grid, int n, int m, int i, int j, int &ans, vector<vector<bool>> &vis, int &max)
    {
        if (!isSafe(grid, n, m, i, j, vis))
            return;
        vis[i][j] = true;
        ans += grid[i][j];
        if (ans > max)
            max = ans;
        dfs(grid, n, m, i + 1, j, ans, vis, max);
        dfs(grid, n, m, i - 1, j, ans, vis, max);
        dfs(grid, n, m, i, j + 1, ans, vis, max);
        dfs(grid, n, m, i, j - 1, ans, vis, max);
        ans -= grid[i][j];
        vis[i][j] = false;
    }

    int getMaximumGold(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        int ans(0), max(0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                    continue;

                dfs(grid, n, m, i, j, ans, vis, max);
            }
        }

        return max;
    }
};