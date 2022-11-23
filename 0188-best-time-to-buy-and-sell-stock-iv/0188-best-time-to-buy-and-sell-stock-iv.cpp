class Solution {
public:
    
    int helper(vector<int>&price,int ind,int buy,int k,vector<vector<vector<int>>>&dp)
    {
        if(ind==price.size()) return 0;
        if(k==0) return 0;
        
        if(dp[ind][buy][k]!=-1) return dp[ind][buy][k];
        int profit=0;
        if(buy)
        {
            profit=max(-price[ind]+helper(price,ind+1,0,k,dp),0+helper(price,ind+1,1,k,dp));
        }
        else{
            profit=max(price[ind]+helper(price,ind+1,1,k-1,dp),0+helper(price,ind+1,0,k,dp));
        }
        return dp[ind][buy][k] = profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
        
        
        return helper(prices,0,1,k,dp);
    }
};