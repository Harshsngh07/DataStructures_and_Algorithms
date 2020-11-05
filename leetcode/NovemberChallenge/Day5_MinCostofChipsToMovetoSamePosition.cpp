class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
      int n = chips.size();
      int even(0), odd(0);
      for(int i=0;i<n;i++)
      {
          if(chips[i]%2==0) even++;
          else odd++;
      }
        
      int ans = min(even, odd);
      return ans;  
    }
};