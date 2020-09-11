class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maxVal(nums[0]), minVal(nums[0]), maxP(nums[0]);

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] < 0)
                swap(maxVal, minVal);
            maxVal = max(nums[i], maxVal * nums[i]);
            minVal = min(nums[i], minVal * nums[i]);

            maxP = max(maxP, maxVal);
        }

        return maxP;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
