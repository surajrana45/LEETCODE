class Solution {
public:
    
    int helper(vector<int>&prices,int ind,int cap,int buy, vector<vector<vector<int>>>&dp)
    {
        if(ind==prices.size()) return 0;
        if(cap==0) return 0;
        
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        
        int profit=0;
        if(buy){
            profit=max(-prices[ind]+helper(prices,ind+1,cap,0,dp),0+helper(prices,ind+1,cap,1,dp));
        }
        else{
            profit=max(prices[ind]+helper(prices,ind+1,cap-1,1,dp),0+helper(prices,ind+1,cap,0,dp));
        }
        
        return dp[ind][buy][cap] = profit;
    }
    
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return helper(prices,0,2,1,dp);
    }
};