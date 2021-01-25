class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int index(0), count(0);
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
               index = i;
               break;                 
            }
        }
        
        for(int i=index+1;i<n;i++)
        {
            if(nums[i]==0)
                count++;
            else if(nums[i]==1)
            {
                if(count>=k)
                    count = 0;
                else return false;
            }
        }
        
        return true;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();