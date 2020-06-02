class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] < nums[mid + 1])
                start = mid + 1;
            else
                end = mid;
        }

        return start;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();