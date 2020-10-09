class Solution {
public:
vector<int> helper(int num,const vector<int>& nums)
    {
        vector<int> ans;
        for (int i=31; i>=0; i--)
        {
            if ((num>>i)&1)
                ans.push_back(nums[i]);
        }
        return ans;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int sum = pow(2, nums.size());
        
        while (sum--)
            ans.push_back(helper(sum, nums));
        
        return ans;
    }
};