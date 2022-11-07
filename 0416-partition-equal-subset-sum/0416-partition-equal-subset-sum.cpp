class Solution {
public:
    
    bool helper(vector<int>&nums,int target,int ind, vector<vector<int>>&dp)
    {
        if(target==0)
            return true;
         if(ind<0)
            return false;
        
       if(dp[ind][target]!=-1)
           return dp[ind][target];
       
        
        bool nottake = helper(nums,target,ind-1,dp);
        bool take=false;
        if(nums[ind]<=target)
            take = helper(nums,target-nums[ind],ind-1,dp);
        return dp[ind][target] = (nottake|take);
    }
    
    
    bool canPartition(vector<int>& nums) {
     
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)
            return false;
       vector<vector<int>>dp(nums.size(),vector<int>(sum/2+1,-1));
        return helper(nums,sum/2,nums.size()-1,dp);
    }
};