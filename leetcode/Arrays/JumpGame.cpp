class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        int n = nums.size();
        
        if((nums[0]==0 && n>1) || n==0) return false;
        
        for(int i=0;i<n;i++)
        {
            if(reach < i) return false;    
            reach = max(reach, i+nums[i]);
        }
        
        return true;
    }
};