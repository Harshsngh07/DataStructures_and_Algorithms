class Solution
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix)
    {

        if (matrix.empty())
            return matrix;
        int rows = matrix.size();
        int cols = matrix[0].size();
        queue<pair<int, int>> pq;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    pq.push({i - 1, j}), pq.push({i + 1, j}), pq.push({i, j - 1}), pq.push({i, j + 1});
                }
            }
        }

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        int steps = 0;
        while (!pq.empty())
        {
            steps++;
            int size = pq.size();
            for (int i = 0; i < size; i++)
            {
                auto front = pq.front();
                int l = front.first;
                int r = front.second;
                pq.pop();
                if (l >= 0 && r >= 0 && l < rows && r < cols && !visited[l][r] && matrix[l][r] == 1)
                {
                    visited[l][r] = true;
                    matrix[l][r] = steps;
                    pq.push({l - 1, r}), pq.push({l + 1, r}), pq.push({l, r - 1}), pq.push({l, r + 1});
                }
            }
        }

        return matrix;
    }
};