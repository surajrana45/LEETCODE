class Solution {
public:
    
    int helper(vector<int>&nums,int st,int n,vector<int>&dp)
    {
        if(n == st)
        {
            return nums[st];
        }
        if(n<st)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
        int pick = nums[n]+helper(nums,st,n-2,dp);
        int npick = helper(nums,st,n-1,dp);
        
        return (dp[n] = max(pick,npick));
    }
    
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp1(n,-1);
        vector<int>dp2(n,-1);
        if(n == 1)
            return nums[0];
        return max(helper(nums,0,n-2,dp1),helper(nums,1,n-1,dp2));
    }
};