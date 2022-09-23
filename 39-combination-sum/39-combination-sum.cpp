class Solution {
public:
    
    void helper(vector<int>nums,vector<vector<int>>&ans,vector<int>temp,int target,int ind)
    {
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        if(ind>=nums.size())
            return;
        if(target<0)
            return;
        temp.push_back(nums[ind]);
        if(target>=nums[ind])
        {
             helper(nums,ans,temp,target-nums[ind],ind);
            temp.pop_back();
             helper(nums,ans,temp,target,ind+1);
        }
       
      else{
            helper(nums,ans,temp,target-nums[ind],ind+1);
            temp.pop_back();
             helper(nums,ans,temp,target,ind+1);
      }
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        
        helper(nums,ans,temp,target,0);
        return ans;
    }
};