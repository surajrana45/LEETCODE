class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
     
       int num = nums[0];
        int leftcnt = 0;
        int rightcnt = 0;
        
        for(int i=1;i<nums.size();i++)
        {
            if(num<nums[i])
                num = nums[i];
            else
                leftcnt++;
        }
        num = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(num>nums[i])
                num = nums[i];
            else
                rightcnt++;
        }
        int ans = min(leftcnt,rightcnt);
        return ans<=1;
      
    }
};