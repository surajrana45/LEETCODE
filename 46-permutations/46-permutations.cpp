class Solution {
public:
    
    void helper(vector<int>nums,vector<vector<int>>&ans,vector<int>temp,map<int,int>mp)
    {
        if(temp.size() == nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[nums[i]]++;
                temp.push_back(nums[i]);
                helper(nums,ans,temp,mp);
                temp.pop_back();
                mp.erase(nums[i]);
            }
            //mp[nums[i]]++;
        }
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        map<int,int>mp;
        helper(nums,ans,temp,mp);
        return ans;
    }
};