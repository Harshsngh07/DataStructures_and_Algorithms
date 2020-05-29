class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        
        int count = distance(nums.begin(),unique(nums.begin(),nums.begin()+len));
        
        return count;
        
    }
};