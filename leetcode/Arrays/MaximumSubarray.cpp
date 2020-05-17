class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int men(0), msf(INT_MIN);

        for (int i = 0; i < nums.size(); i++)
        {
            men += nums[i];
            if (men < nums[i])
                men = nums[i];
            if (msf < men)
                msf = men;
        }
        return msf;
    }
};