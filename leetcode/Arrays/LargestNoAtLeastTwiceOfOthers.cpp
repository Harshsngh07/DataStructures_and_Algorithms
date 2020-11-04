class Solution
{
public:
    int dominantIndex(vector<int> &nums)
    {
        int n = nums.size();
        int maxE = *max_element(nums.begin(), nums.end());
        int maxI = max_element(nums.begin(), nums.end()) - nums.begin();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++)
            if (nums[i] * 2 > maxE)
                return -1;
        return maxI;
    }
};