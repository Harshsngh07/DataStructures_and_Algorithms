class Solution
{
public:
    int minDist(int a[], int n, int x, int y)
    {
        // code here
        int prev(-1), minDistance(INT_MAX);

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x || a[i] == y)
            {
                if (prev != -1 && a[i] != a[prev])
                    minDistance = min(minDistance, i - prev);
                prev = i;
            }
        }

        if (minDistance == INT_MAX)
            return -1;

        return minDistance;
    }
};