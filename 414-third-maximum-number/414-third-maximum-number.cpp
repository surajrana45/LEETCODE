class Solution {
public:
    int thirdMax(vector<int>& nums) {
       sort(nums.begin(),nums.end(),greater<int>());
        
        long mini = LONG_MAX;
        if(nums.size()<3)
            return nums[0];
        
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(mini>nums[i])
            {
                mini = nums[i];
                count++;
            }
            if(count == 3)
                break;
        }
        if(count<3)
            return nums[0];
        return mini;
    }
};