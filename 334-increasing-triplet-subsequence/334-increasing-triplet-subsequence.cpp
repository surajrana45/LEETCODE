class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        int i = INT_MAX;
        int j = INT_MAX;
        int k = INT_MAX;
        
        for(int x = 0;x<nums.size();x++)
        {
            if(i>nums[x]){
                i = nums[x];
            }
            else if(j>nums[x] && nums[x]!=i)
            {
                j = nums[x];
            }
            else if(k>=nums[x] && nums[x]!=i && nums[x]!=j){
                k = nums[x];
                if(k == 2147483647)
                    k=k-1;
                if(j == 2147483646)
                    j = j-1;
                if(i == 2147483645)
                    i = i-1;
            }
            
            if(i<j && j<k && i!=INT_MAX && j!=INT_MAX && k!=INT_MAX)
           return true;
        }
       
        return false;
    }
};