class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>> subsets;
       sort(nums.begin(), nums.end());
       subsets.push_back(vector<int>());
       int startIndex(0), endIndex(0);
        
       for(int i=0;i<nums.size();i++)
       {
           startIndex = 0;
           if(i>0 && nums[i]==nums[i-1])
               startIndex = endIndex + 1;
           endIndex = subsets.size()-1;
           
           for(int j=startIndex;j<=endIndex;j++)
           {
               vector<int> set(subsets[j]);
               set.push_back(nums[i]);
               subsets.push_back(set);
           }
           
       }
        
        return subsets; 
    }
};