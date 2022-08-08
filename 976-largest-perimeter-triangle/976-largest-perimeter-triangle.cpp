class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        int sum = 0;
        while(n>=2)
        {
            if(nums[n-1] + nums[n-2] >nums[n]){
                sum = sum+nums[n-1]+nums[n-2]+nums[n];
                return sum;
            }
            n--;
        }
        
        
        return 0;
    }
};