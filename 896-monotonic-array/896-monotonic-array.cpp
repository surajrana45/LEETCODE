class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
        int i=0;
        int j = nums.size()-1;
        
        if(nums[i]<nums[j])
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]>nums[i+1])
                    return false;
            }
        }
        else if(nums[i]>nums[j])
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1])
                    return false;
            }
        }
        else
        {
            for(int i=0;i<nums.size()-1;i++)
            {
                if(nums[i]<nums[i+1] || nums[i]>nums[i+1])
                    return false;
            }
        }
        return true;
    }
};