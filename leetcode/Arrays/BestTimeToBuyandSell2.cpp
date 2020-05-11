class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxProfit = 0;
        
       if(prices.size() == 0)
           return 0;
        
       for(int i=0;i<prices.size()-1;i++)
       {
           if(prices[i+1]>prices[i])
               maxProfit += prices[i+1]-prices[i];
       }
        return maxProfit;
           
    }
};
