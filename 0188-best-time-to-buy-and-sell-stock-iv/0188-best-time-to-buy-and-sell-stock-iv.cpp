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
    
    int maxProfit(int j, vector<int>& price) {
        int n=price.size();
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(j+1,0)));
        
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int k=1;k<=j;k++)
                {
                   if(buy==1)
                    {
                       dp[ind][buy][k]=max(-                                                                    price[ind]+dp[ind+1][0][k],0+dp[ind+1][1][k]);
                    }
                    else{
                       dp[ind][buy][k]=max(price[ind]+dp[ind+1][1][k-                                         1],0+dp[ind+1][0][k]);
                     }    
                }
            }
        }
        return dp[0][1][j];
    }
};