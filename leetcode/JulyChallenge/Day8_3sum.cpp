class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1, right = n - 1;
            while (left < right)
            {
                int s = nums[i] + nums[left] + nums[right];
                if (s < 0)
                    left++;
                else if (s > 0)
                    right--;
                else
                {
                    vector<int> t(3);
                    t[0] = nums[i];
                    t[1] = nums[left];
                    t[2] = nums[right];
                    ans.push_back(t);
                    while (left < right && nums[left] == t[1])
                        left++;
                }
            }
            while (i < n - 2 && nums[i] == nums[i + 1])
                i++;
        }
        return ans;
    }
};