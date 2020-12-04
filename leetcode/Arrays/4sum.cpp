class Solution
{
public:
    // T.C --> O(n^3) because n^2 for loop inside loop and n for 2 pointer technique
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 4)
            return ans;
        // Sort the vector
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; ++i)
        {
            for (int j = i + 1; j < n - 2; ++j)
            {
                int target2 = target - (nums[i] + nums[j]);
                // 2_Sum for j+1 to n-1 or 2_pointer technique
                int left = j + 1;
                int right = n - 1;
                while (left < right)
                {
                    int sum = nums[left] + nums[right];
                    if (sum > target2)
                        --right;
                    else if (sum < target2)
                        ++left;
                    else
                    {
                        vector<int> sub({nums[i], nums[j], nums[left], nums[right]});
                        ans.push_back(sub);
                        // to avoid duplicates
                        while (left < right && nums[left] == sub[2])
                            ++left;
                        while (left < right && nums[right] == sub[3])
                            --right;
                    }
                }
                // to avoid duplicates
                while (j + 1 < n && nums[j] == nums[j + 1])
                    ++j;
            }
            // to avoid duplicates
            while (i + 1 < n && nums[i] == nums[i + 1])
                ++i;
        }
        return ans;
    }
};