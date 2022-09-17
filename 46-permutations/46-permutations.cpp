class Solution {
public:
    
    void helper(vector<int>nums,vector<vector<int>>&ans,int ind)
    {
        if(ind >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            helper(nums,ans,ind+1);
            swap(nums[ind],nums[i]);
        }
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        map<int,int>mp;
        helper(nums,ans,0);
        return ans;
    }
};