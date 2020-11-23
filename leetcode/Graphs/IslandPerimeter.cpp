class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int walls(0), blocks(0);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j])
                {
                    blocks++;

                    if (i && grid[i - 1][j])
                        walls++;
                    if (j && grid[i][j - 1])
                        walls++;
                }
            }
        }

        return 4 * blocks - 2 * walls;
    }
};