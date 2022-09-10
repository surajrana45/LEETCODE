class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums.size() == 1 && nums[0]>=target)
        {
            return 0;
        }
        if(target > nums[nums.size()-1])
            return nums.size();
        
        if(nums[0]>=target)
            return 0;
        
        if(nums.size() == 2 && nums[1]>=target)
        {
            return 1;
        }
        
        int i=0;
        int j = nums.size()-1;
        
        while(i<j)
        {
           int mid = (i+j)/2;
            
            if(nums[mid] == target || (nums[mid-1]<target && nums[mid]>target))
                return mid; 
            else if(nums[mid]>target)
                j = mid;
            else
                i = mid+1;
            
        }
        return i;
    }
};