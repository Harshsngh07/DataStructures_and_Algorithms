class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        //v.push_back(nums[0]);
        //int sum = nums[0];
        for(int i=1;i<n;i++)
        {
            nums[i] += nums[i-1];
          //  v.push_back(sum);
        }
        
        return nums;
    }
};

static int fastio = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();