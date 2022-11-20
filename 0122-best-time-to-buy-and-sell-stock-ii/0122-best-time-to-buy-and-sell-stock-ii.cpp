class Solution {
public:
    
    int helper(vector<int>&price,int buy,int ind,vector<vector<int>>&dp)
    {
        if(ind == price.size())
            return 0;
        
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        
        int profit=0;
        if(buy)
           profit = max(-price[ind]+helper(price,0,ind+1,dp),0+helper(price,1,ind+1,dp));
        else
            profit = max(price[ind]+helper(price,1,ind+1,dp),helper(price,0,ind+1,dp));
        
        return dp[ind][buy] = profit;
        
    }
    
    int maxProfit(vector<int>& prices) {
     
        vector<vector<int>>dp(prices.size(),vector<int>(2,-1));
        return helper(prices,1,0,dp);
        
    }
};