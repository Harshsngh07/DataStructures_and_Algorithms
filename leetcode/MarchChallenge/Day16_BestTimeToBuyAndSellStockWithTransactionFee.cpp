class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int len = prices.size();
        int cash(0), hold(-prices[0]);
        
        for(int i=1;i<len;i++)
        {
            cash = max(cash, hold+prices[i]-fee);
            hold = max(hold, cash-prices[i]);
        }
        
        return cash;
    }
};