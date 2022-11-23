class Solution {
public:
    
//     int helper(vector<int>&prices,int ind,int cap,int buy, vector<vector<vector<int>>>&dp)
//     {
//         if(ind==prices.size()) return 0;
//         if(cap==0) return 0;
        
//         if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        
//         int profit=0;
//         if(buy){
//             profit=max(-prices[ind]+helper(prices,ind+1,cap,0,dp),0+helper(prices,ind+1,cap,1,dp));
//         }
//         else{
//             profit=max(prices[ind]+helper(prices,ind+1,cap-1,1,dp),0+helper(prices,ind+1,cap,0,dp));
//         }
        
//         return dp[ind][buy][cap] = profit;
//     }
    
    
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<long>>>dp(n+1,vector<vector<long>>(2,vector<long>(3,0)));
        
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=2;cap++)
                {
                    int profit=0;
                if(buy==1){
                    dp[ind][buy][cap]=max(-prices[ind]+dp[ind+1][0][cap],0+dp[ind+1][1][cap]);
                }
                else{
                    dp[ind][buy][cap]=max(prices[ind]+dp[ind+1][1][cap-1],0+dp[ind+1][0][cap]);
                } 
                }
            }
        }
        
        return dp[0][1][2];
    }
};