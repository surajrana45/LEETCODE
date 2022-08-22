class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
       vector<int>left(nums.size());
        vector<int>right(nums.size());
        
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(i == 0)
            {
                left[i] = nums[i];
                right[i] = nums[n-1-i];
            }
            else
            {
                left[i] = left[i-1]*nums[i];
                right[i] = right[i-1]*nums[n-1-i];
            }
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(i == 0)
            {
                ans[i] = right[n-2];
            }
            else if(i == n-1)
            {
                ans[i] = left[n-2];
            }
            else
            {
                ans[i] = left[i-1]*right[n-i-2];
            }
        }
        return ans;
    }
};