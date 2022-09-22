class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        vector<int>ans(prices.size());
        
        int mini = INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini = min(prices[i],mini);
            ans[i] = mini;
        }
        int maxp = 0;
        for(int i=0;i<ans.size();i++)
        {
            maxp = max(maxp,(prices[i]-ans[i]));
        }
        
        return maxp;
    }
};