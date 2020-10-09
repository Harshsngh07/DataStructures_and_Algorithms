class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int count = 1;
        int i(0), j(1);
        while (j < nums.size())
        {
            if (nums[i] == nums[j])
            {
                count++;
                j++;
            }
            else
            {
                count = 1;
                i = j;
                j++;
            }

            if (count > 2)
            {
                nums.erase(nums.begin() + j - 1);
                j = i + 2;
            }
        }
        return nums.size();
    }
};
