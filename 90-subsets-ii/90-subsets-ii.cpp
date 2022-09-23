class Solution {
public:
    
    void helper(vector<int>nums,vector<int>temp, set<vector<int>>&s,int ind)
    {
        if(ind == nums.size())
        {
            s.insert(temp);
            return;
        }
      
        
            temp.push_back(nums[ind]);
            helper(nums,temp,s,ind+1);
            temp.pop_back();
            helper(nums,temp,s,ind+1);
                
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
       sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
       set<vector<int>>s;
        
        helper(nums,temp,s,0);
        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};