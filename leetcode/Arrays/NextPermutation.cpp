class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1;
        while(i>0)
        {
            if(nums[i]>nums[i-1])
            {
                int k=i;
                int j=nums[k];
                int idx=i;
                while(k<nums.size())
                {
                    if(nums[k]>nums[i-1] && nums[k]<j)
                    {
                        idx=k;
                    }
                    k++;
                }
                swap(nums[i-1],nums[idx]);
                break;
            }
            i--;
        }
        sort(nums.begin()+i,nums.end());
    }
};