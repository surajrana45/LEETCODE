class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = 0;
        int mini = INT_MAX;
        
        for(int i = 1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            {
                mini = min(mini,prices[i-1]);
                int temp = prices[i]-mini;
                
                sum = max(sum,temp);
            }
        }
        return sum;
    }
};