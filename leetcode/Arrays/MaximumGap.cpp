class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return 0;
        
        sort(nums.begin(), nums.end());
        int ans =INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            int x = abs(nums[i]-nums[i+1]);
            if(x>ans)
                ans = x;
        }
        
        return ans;
    }
};