class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      //  sort(nums.begin(),nums.end());
    
       unordered_map<int,int>mp;
        
       for(int i=0;i<nums.size();i++)
       {
           if(mp.count(nums[i]))
           {
               int diff = abs(mp[nums[i]]-i);
               if(diff<=k)
                   return true;
           }
           
           mp[nums[i]] = i;
       }
        
        return false;
    }
};