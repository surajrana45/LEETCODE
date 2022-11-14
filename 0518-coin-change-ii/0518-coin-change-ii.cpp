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
       
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));
        for(int t=0;t<=amount;t++)
        {
            if(t%coins[0]==0) dp[0][t] = 1;
            else dp[0][t] = 0;
        }
        for(int ind = 1;ind<coins.size();ind++)
        {
            for(int t=0;t<=amount;t++)
            {
                int nottake = dp[ind-1][t];
                int take=0;
                if(t>=coins[ind])
                 {
                   take=dp[ind][t-coins[ind]];
                 }
               dp[ind][t] = take+nottake; 
            }
        }
        return dp[coins.size()-1][amount];
    }
};