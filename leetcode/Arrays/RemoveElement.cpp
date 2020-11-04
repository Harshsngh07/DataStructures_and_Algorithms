class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int ans = 0;
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        ans = nums.size();
        return ans;
    }
};

// [3,2,2,3] val = 3
// nonDuplicate = 1
// nums[1] = nums[1];
//[3,2]
//nums[