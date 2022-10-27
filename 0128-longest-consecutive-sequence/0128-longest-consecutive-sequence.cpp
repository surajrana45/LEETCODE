class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        sort(nums.begin(),nums.end());
        
        int cnt=1;
        int maxi = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<nums[i+1] && abs(nums[i+1]-nums[i])==1)
                cnt++;
            else if(nums[i+1]-nums[i] == 0)
                continue;
            else
            {
                maxi = max(cnt,maxi);
                cnt=1;
            }
        }
        maxi = max(maxi,cnt);
        return maxi;
    }
};