//oms
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        int m = A.size();
        int n = A[0].size();
        for (int i = 0; i < m; i++)
        {
            int x = 0, y = n - 1;
            while (x <= y)
            {
                if (A[i][x] == A[i][y])
                {
                    A[i][x] = !A[i][x];
                    if (x != y)
                        A[i][y] = !A[i][y];
                }
                x++;
                y--;
            }
        }
        return A;
    }
};

//8ms
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A)
    {
        int n = A.size();
        for (int i = 0; i < n; i++)
        {
            reverse(A[i].begin(), A[i].end());
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                if (A[i][j] == 1)
                    A[i][j] = 0;
                else
                    A[i][j] = 1;
            }
        }

        return A;
    }
};