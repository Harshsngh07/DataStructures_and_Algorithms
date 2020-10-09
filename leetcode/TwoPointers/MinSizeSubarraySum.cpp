class Solution
{
public:
    int minSubArrayLen(int s, vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        int window(0), ans(INT_MAX), left(0), right(0);

        while (right < n)
        {
            window += nums[right];
            while (window >= s)
            {
                ans = min(ans, right - left + 1);
                window -= nums[left++];
            }

            right++;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};