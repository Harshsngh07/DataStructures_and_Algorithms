class Solution
{
public:
    void helper(vector<vector<char>> &g, int x, int y, int r, int c)
    {
        if (x < 0 || x >= r || y < 0 || y >= c || g[x][y] != '1')
            return;
        g[x][y] = '2';

        helper(g, x + 1, y, r, c); //down
        helper(g, x - 1, y, r, c); //up
        helper(g, x, y + 1, r, c); //right
        helper(g, x, y - 1, r, c); //left
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int r = grid.size();
        if (r == 0)
            return 0;
        int c = grid[0].size();
        int numOfIslands(0);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (grid[i][j] == '1')
                {
                    helper(grid, i, j, r, c);
                    numOfIslands++;
                }
            }
        }

        return numOfIslands;
    }
};