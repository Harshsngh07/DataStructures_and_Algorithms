class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(target==0) return 1;
        int n = nums.size();
        unsigned long long  dp[target+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        
        for(int i=1;i<=target;i++)
        {
            for(int k=0;k<n;k++)
            {
                if((i-nums[k])>=0)
                    dp[i]+=dp[i-nums[k]];
            }
        }
        
        return dp[target];
    }
};