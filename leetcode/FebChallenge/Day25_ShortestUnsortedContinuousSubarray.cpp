class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int minE = INT_MAX, maxE = INT_MIN;
        bool flag = false;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
                flag = true;
            if(flag)
                minE = min(minE, nums[i]);
        }
        
        flag = false;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]>nums[i+1])
                flag = true;
            if(flag)
                maxE = max(maxE, nums[i]);
        }
        
        int l, r;
        for(l=0;l<n;l++)
            if(minE<nums[l]) break;
        
        for(r=n-1;r>=0;r--)
            if(maxE>nums[r]) break;
        
        return r-l<0? 0: r-l+1;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();