class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int start(0), end(n - 1);

        if (n == 1)
            return nums[0];
        if (n == 2)
            return min(nums[0], nums[1]);

        while (start <= end)
        {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end])
                start = mid + 1;
            else if (nums[mid] < nums[end])
                end = mid;
            else
                end--;
        }
        return nums[start];
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();