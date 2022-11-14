class Solution {
public:
    
    int helper(vector<int>arr,int t,int ind,vector<vector<int>>&dp)
    {
        if(ind==0)
        {
            return (t%arr[0]==0);
        }
        
        if(dp[ind][t]!=-1) return dp[ind][t];
        
        int nottake = helper(arr,t,ind-1,dp);
        int take=0;
        if(t>=arr[ind])
        {
            take=helper(arr,t-arr[ind],ind,dp);
        }
        return dp[ind][t] = take+nottake;
    }
    
    int change(int amount, vector<int>& coins) {
       
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return helper(coins,amount,coins.size()-1,dp);
    }
};