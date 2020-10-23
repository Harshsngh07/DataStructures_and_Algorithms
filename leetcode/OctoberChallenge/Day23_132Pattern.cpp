class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return false;
        stack<int> s;
        vector<int> minV(n);
        minV[0] = nums[0];
        
        for(int i=1;i<n;i++)
            minV[i] = min(minV[i-1], nums[i]);
        
        for(int j=n-1;j>0;j--){
            while(!s.empty() && nums[s.top()]<nums[j])
            {
                if(nums[s.top()]>minV[j-1])
                    return true;
                else
                    s.pop();
            }
            s.push(j);
        }
        return false;
    }
};