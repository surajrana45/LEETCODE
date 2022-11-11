class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1]) k++;
        }
        int i=0;
        int j=1;
        while(j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
                j++;
            }
            else
                j++;
        }
        return i+1;
    }
};