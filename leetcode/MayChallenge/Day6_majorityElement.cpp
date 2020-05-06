class Solution {
public:
    int majorityElement(vector<int>& nums) {
       
        unordered_map<int,int> freq;
        for(int const &i : nums)
            freq[i]++;
        
        int count(0);
        for(int i=0;i<nums.size();i++)
        {
            if(freq[nums[i]]>nums.size()/2)
                count = nums[i];
        }
        return count;
    }
};
