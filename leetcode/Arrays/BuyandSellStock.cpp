class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int minVal = numeric_limits<int>::max();
      int maxProfit = 0;
    
       for(const int &price: prices)
       {
           minVal = std::min(minVal,price);
           maxProfit = std::max(maxProfit,price-minVal);
       }
        return maxProfit;
    }
};
