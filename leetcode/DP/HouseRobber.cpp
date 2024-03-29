class Solution {
public:
    
    int helper(vector<int> &nums)
    {
        int len = nums.size();
        int dp[len+1];
        
        //base cases
        
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<len;i++)
            dp[i] = max(dp[i-1], dp[i-2] + nums[i]);
            
        return dp[len-1];
    }
    
    
    int rob(vector<int>& nums) {
        
        //edge cases
        
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        
        return helper(nums);
    }
};