class Solution {
public:
    
    int helper(vector<int>&nums,int ind,int prev,vector<vector<int>>&dp)
    {
       // if(ind==nums.size()-1 && nums[ind]>prev) return 1;
        if(ind==nums.size()) return 0;
        
        if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
        
        int take=0;
        int nottake=0;
        if(prev==-1 || nums[ind]>nums[prev])
            take=max(1+helper(nums,ind+1,ind,dp),0+helper(nums,ind+1,prev,dp));
        else
            nottake = 0+helper(nums,ind+1,prev,dp);
        
        return  dp[ind][prev+1] = max(take,nottake);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
       
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return helper(nums,0,-1,dp);
    }
};