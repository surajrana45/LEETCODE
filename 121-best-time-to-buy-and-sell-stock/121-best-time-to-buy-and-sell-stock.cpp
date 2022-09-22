class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = prices[0];
        int maxp = 0;

        for(int i=1;i<prices.size();i++)
        {
          mini = min(mini,prices[i]);
          maxp = max(maxp,(prices[i]-mini));  
            
        }
        return maxp;
    }
};