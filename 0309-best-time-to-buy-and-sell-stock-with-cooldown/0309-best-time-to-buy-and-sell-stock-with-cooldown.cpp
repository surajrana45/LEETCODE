class Solution {
public:
    
    int helper(vector<int>arr,int ind,int buy,vector<vector<int>>&dp)
    {
        if(ind>=arr.size()) return 0;
        
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        
        int profit=0;
        if(buy)
        {
            profit = max(-arr[ind]+helper(arr,ind+1,0,dp),0+helper(arr,ind+1,1,dp));
        }
        else{
            profit=max(arr[ind]+helper(arr,ind+2,1,dp),0+helper(arr,ind+1,0,dp));
        }
        return dp[ind][buy] = profit;
    }
    
    
    int maxProfit(vector<int>& prices) {
       
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,-1));
        return helper(prices,0,1,dp);
    }
};