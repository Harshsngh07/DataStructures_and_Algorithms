class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size();
        if (n == 0)
            return 0;
        int left[n];

        // Right [i] contains height of tallest bar to
        // the right of ith bar including itself
        int right[n];

        // Initialize result
        int water = 0;

        // Fill left array
        left[0] = height[0];
        for (int i = 1; i < n; i++)
            left[i] = max(left[i - 1], height[i]);

        // Fill right array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--)
            right[i] = max(right[i + 1], height[i]);

        // Calculate the accumulated water element by element
        // consider the amount of water on i'th bar, the
        // amount of water accumulated on this particular
        // bar will be equal to min(left[i], right[i]) - arr[i] .
        for (int i = 0; i < n; i++)
            water += min(left[i], right[i]) - height[i];

        return water;
    }
};
static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();