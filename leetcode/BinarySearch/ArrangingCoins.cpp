class Solution
{
public:
    int arrangeCoins(int n)
    {
        long N = (long)n;
        long left = 1;
        long right = N;

        while (left <= right)
        {
            long mid = left + (right - left) / 2;

            if (mid * (mid + 1) / 2 <= N)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return (int)left - 1;
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();