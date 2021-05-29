class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      int n = nums.size(); 
      int currSum(0), maxSum(0);
      int i(0), j(0);
      unordered_set<int> s;
      while(i<n && j<n)
      {
          if(s.find(nums[j])==s.end())
          {
              currSum+=nums[j];
              s.insert(nums[j++]);
              maxSum = max(maxSum, currSum);
          }
          else
          {
              currSum -= nums[i];
              s.erase(nums[i++]);
          }
      }
      return maxSum;  
    }
};