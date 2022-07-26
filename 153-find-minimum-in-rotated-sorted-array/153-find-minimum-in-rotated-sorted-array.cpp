class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int ans = INT_MAX;
        int s = 0;
        int e = nums.size()-1;
        
        while(s<e)
        {
            int mid = (s+e)/2;
            
            if(nums[s]<nums[e])
                return nums[s];
            if(nums[mid]>nums[e])
                s = mid+1;
            else
                e = mid;
            
           
        }
        return nums[s];
        
    }
};