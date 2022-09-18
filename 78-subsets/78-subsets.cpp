class Solution {
public:
    
    void helper(vector<int>nums,vector<vector<int>>&ans,int ind,vector<int>temp)
    {
        if(ind >= nums.size())
        {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        helper(nums,ans,ind+1,temp);
        temp.pop_back();
        helper(nums,ans,ind+1,temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
      
        vector<vector<int>>ans;
        vector<int>temp;
        
        helper(nums,ans,0,temp);
        return ans;
    }
};