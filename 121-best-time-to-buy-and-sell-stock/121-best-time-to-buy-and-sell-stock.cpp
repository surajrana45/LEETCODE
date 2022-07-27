class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minPr = prices[0];
        int profit = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
           minPr = min(minPr,prices[i]);
           profit = max(profit, (prices[i]-minPr)); 
        }
        return profit;
    }
};