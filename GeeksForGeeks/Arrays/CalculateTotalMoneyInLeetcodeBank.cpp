class Solution
{
public:
    int totalMoney(int n)
    {
        int total(0);

        int a[7] = {1, 2, 3, 4, 5, 6, 7};

        for (int i = 0; i < n; i++)
        {
            if (i > 6)
            {
                int x = i % 7;
                a[x] += 1;
                total += a[x];
            }
            else
                total += a[i];
        }

        return total;
    }
};