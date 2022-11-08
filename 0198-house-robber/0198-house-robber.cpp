class Solution {
public:
    
    int helper(vector<int>&nums,int n,vector<int>&dp)
    {
        if(n==0)
            return nums[0];
        if(n<0)
            return 0;
        
        if(dp[n]!=-1)return dp[n];
        
        int pick = nums[n]+helper(nums,n-2,dp);
        int notpick = helper(nums,n-1,dp);
        
        return dp[n] = max(pick,notpick);
    }
    
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return helper(nums,nums.size()-1,dp);
    }
};