class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int sum = 0;
        int currsum = 0;
        if(nums.size() == 1)
            return nums[0];
        
        while(j<nums.size())
        {
            if(mp.find(nums[j])!=mp.end())
            {
                while(mp.find(nums[j])!=mp.end())
                {
                    sum-=nums[i];
                    mp.erase(nums[i]);
                    i++;
                }
                mp[nums[j]]++;
                sum+=nums[j];
            }
            else
            {
                mp[nums[j]]++;
                sum+=nums[j];
            }
            currsum=max(currsum,sum);
            j++;
        }
        return currsum;
            
    }
};