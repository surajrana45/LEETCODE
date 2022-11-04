class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
                maxi=nums[i];
            if(nums[i]<mini)
                mini=nums[i];
        }
        
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        int ans;
        int i;
        for(i=1;i<=maxi;i++)
        {
            if(mp.find(i)==mp.end())
            {
                ans=i;
                break;
            }
        }
        if(i>=maxi)
        {
            ans=maxi+1;
        }
        if(maxi<0)
        {
            ans=1;
        }
        return ans;
    }
};