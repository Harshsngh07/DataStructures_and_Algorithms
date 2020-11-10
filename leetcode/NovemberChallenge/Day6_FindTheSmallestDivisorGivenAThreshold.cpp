class Solution {
public:
    int helper(vector<int>& nums, int n, int mid)
        {
        int sum=0;
        for(int i=0;i<n;i++)
            {
              sum+=ceil(nums[i]*1.0/mid);
            }
        return sum;
        }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int lo=1, hi=nums[nums.size()-1];
       while(lo<=hi)
           {
            int mid=(lo+hi)/2;
            int ans=helper(nums,nums.size(),mid);
            if(ans>threshold)
                lo = mid+1;
            else
                hi = mid-1;
           }
        return lo;
    }
};
