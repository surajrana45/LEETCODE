class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
       
         vector<vector<int>>ans1;
        for(unsigned int i=0;i<nums.size();i++)
        {
            if((i>0) && (nums[i-1]==nums[i]))
                continue;
           
             int l=i+1;
             int j = nums.size()-1;
            while(l<j)
            {
                int ans = nums[i]+nums[l]+nums[j];
                
                if(ans<0) l++;
                else if(ans>0) j--;
                else
                {
                    ans1.push_back(vector<int>{nums[i],nums[l],nums[j]});
                     while(l<j && nums[l]==nums[l+1])
                              {
                                  l++;
                              }
                      while(l<j && nums[j]==nums[j-1])
                              {
                                  j--;
                              }   
                    l++;
                    j--;
                }
               
            }
        }
        return ans1;
    }
};