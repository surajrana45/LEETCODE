class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
       // sort(nums.begin(),nums.end());
    
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(mp[nums[i]-1] == 0 && mp[nums[i]+1] == 0 && mp[nums[i]] == 1)
            {
                ans.push_back(nums[i]);
            }
                
        }
        return ans;
    }
};