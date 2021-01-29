class Solution
{

public:
    void spirallyTraverse(int m, int n, vector<vector<int>> ar, vector<int> &v)
    {

        int top(0), left(0), bottom(n - 1), right(m - 1);

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                v.push_back(ar[top][i]);
            top++;

            for (int i = top; i <= bottom; i++)
                v.push_back(ar[i][right]);
            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    v.push_back(ar[bottom][i]);
                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    v.push_back(ar[i][left]);
                left++;
            }
        }
    }

    int findK(vector<vector<int>> &a, int n, int m, int k)
    {
        vector<int> v;
        spirallyTraverse(m, n, a, v);
        return v[k - 1];
    }
};