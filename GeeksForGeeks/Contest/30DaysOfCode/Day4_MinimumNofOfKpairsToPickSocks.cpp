class Solution
{

public:
    int find_min(int a[], int n, int k)
    {
        int O(0), ans(-1), p(0);
        for (int i = 0; i < n; i++)
        {
            p += a[i] / 2;

            if (a[i] % 2 == 0)
                O += (a[i] - 2) / 2;
            else
                O += (a[i] - 1) / 2;
        }

        if (p < k)
            return ans;

        if (k <= O)
            ans = 2 * (k - 1) + n + 1;
        else
            ans = 2 * O + n + k - O;

        return ans;
    }
};