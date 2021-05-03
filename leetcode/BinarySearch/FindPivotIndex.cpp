class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        sum = accumulate(nums.begin(), nums.end(), sum);

        int leftSum(0), rightSum(sum);

        for (int i = 0; i < n; i++)
        {
            rightSum -= nums[i];

            if (leftSum == rightSum)
                return i;

            leftSum += nums[i];
        }
        return -1;
    }
};