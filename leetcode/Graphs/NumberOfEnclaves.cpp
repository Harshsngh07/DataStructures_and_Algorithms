class Solution
{
public:
    int n, m;
    void dfs(vector<vector<int>> &A, int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m || A[i][j] == 0)
            return;

        A[i][j] = 0;
        dfs(A, i + 1, j);
        dfs(A, i - 1, j);
        dfs(A, i, j + 1);
        dfs(A, i, j - 1);
        return;
    }

    int numEnclaves(vector<vector<int>> &A)
    {
        n = A.size();
        m = A[0].size();
        if (n == 0)
            return 0;
        int count(0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (A[i][j] == 1)
                    if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                    {
                        dfs(A, i, j);
                    }
            }
        }
        count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (A[i][j] == 1)
                    count++;
            }
        }

        return count;
    }
};