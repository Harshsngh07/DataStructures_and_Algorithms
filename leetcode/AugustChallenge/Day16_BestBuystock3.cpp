class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();

        if (n <= 1)
            return 0;

        vector<int> left(n, INT_MIN);
        vector<int> right(n, INT_MIN);

        int minSoFar = prices[0];

        for (int i = 1; i < n; i++)
        {
            left[i] = max(left[i - 1], prices[i] - minSoFar);
            minSoFar = min(minSoFar, prices[i]);
        }

        int maxSoFar = prices[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            right[i] = max(right[i + 1], maxSoFar - prices[i]);
            maxSoFar = max(maxSoFar, prices[i]);
        }

        int profit(0);
        profit = max(left[n - 1], profit);

        for (int i = 1; i < n - 2; i++)
            profit = max(profit, left[i] + right[i + 1]);

        return profit;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();