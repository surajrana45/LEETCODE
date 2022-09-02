class Solution {
public:
    
    bool check(vector<int>nums,int i,int j)
    {
       sort(nums.begin()+i,nums.begin()+j+1);
       int diff = nums[i+1]-nums[i];
        i=i+1;
        for(i;i<=j;i++)
        {
            if((nums[i]-nums[i-1]) != diff)
                return false;
        }
        return true;
    }
    
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r){ 
        vector<bool>ans;
        int m = l.size();
        
        int j=0;
        for(int i=0;i<m;i++)
        {   
            if(check(nums,l[i],r[i]))
                ans.push_back(true);
            else
                ans.push_back(false);
            
        }
       return ans;   
    }
};