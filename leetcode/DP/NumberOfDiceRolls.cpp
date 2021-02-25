#define m 1000000007
class Solution {
public:
    int helper(int d, int f, int target, vector<int> dp[])
    {
        if(target==0 && d==0) return 1;
        
        if(target<=0 || d<=0) return 0;
        
        if(dp[target][d]!=-1) return dp[target][d];
        
        int count(0);
        for(int i=1;i<=f;i++)
            count = (count + helper(d-1, f, target-i, dp))%m;
        
        return dp[target][d] = count;
    }
    
    int numRollsToTarget(int d, int f, int target) {
        vector<int> dp[target+1];
        for(int i=0;i<=target;i++)
        {
            for(int j=0;j<=d;j++)
                dp[i].push_back(-1);
        }
        
        return helper(d,f,target,dp);
    }
};