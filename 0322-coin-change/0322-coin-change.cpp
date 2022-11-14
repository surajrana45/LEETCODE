class Solution {
public:
    
//     int helper(vector<int>coins,int t,int ind,vector<vector<int>>&dp)
//     {
//       if(ind==0)
//        {
//           if(t%coins[0]==0) return (t/coins[0]);
//           return 1e9; 
          
//        }
       
//         if(dp[ind][t]!=-1)return dp[ind][t];
        
//         int nottake = 0+helper(coins,t,ind-1,dp);
//         int take = 1e9;
//         if(t>=coins[ind])
//         {
//             take = 1 + helper(coins,t-coins[ind],ind,dp);
//         }
//         return dp[ind][t] = min(take,nottake);
//     }
    
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0; 
        
         vector<vector<int>>dp(coins.size(),vector<int>(amount+1,0));
         for(int t=0;t<=amount;t++)
         {
             if(t%coins[0]==0) dp[0][t] = t/coins[0];
             else dp[0][t] = 1e9;
         }
        
        for(int ind=1;ind<coins.size();ind++)
        {
            for(int t=0;t<=amount;t++)
            {
                int nottake = 0+dp[ind-1][t];
                int take=1e9;
                if(t>=coins[ind])
                {
                    take = 1+dp[ind][t-coins[ind]];
                }
                dp[ind][t] = min(take,nottake);
            }
        }
        int ans =  dp[coins.size()-1][amount];
        if(ans >= 1e9)
            return -1;
        return ans;
        
    }
};