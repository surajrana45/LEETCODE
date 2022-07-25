class Solution {
public:
    
    int first_occur(vector<int>&nums,int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid]>target)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return ans;
    }
    
    int last_occur(vector<int>&nums,int target)
    {
        int s = 0;
        int e = nums.size()-1;
        int ans = -1;
        
        while(s<=e)
        {
            int mid = (s+e)/2;
            if(nums[mid] == target)
            {
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid]>target)
            {
                e = mid-1;
            }
            else
            {
                s = mid+1;
            }
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ans1 = first_occur(nums,target);
        int ans2 = last_occur(nums,target);
        vector<int>v;
        v.push_back(ans1);
        v.push_back(ans2);
        return v;
    }
};