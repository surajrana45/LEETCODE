class Solution {
public:
    
    int findFirst(vector<int>v,int target)
    {
        int i=0;
        int j = v.size()-1;
        int ans = -1;
        
        while(i<=j)
        {
            int mid = (i+j)/2;
            
            if(v[mid] == target)
            {
                ans = mid;
                j = mid-1;
            }
            else if(v[mid]>target)
                j = mid-1;
            else 
                i = mid+1;
        }
        return ans;
    }
    
    int findLast(vector<int>v,int target)
    {
        int i=0;
        int j = v.size()-1;
        int ans = -1;
        
        while(i<=j)
        {
            int mid = (i+j)/2;
            
            if(v[mid] == target)
            {
                ans = mid;
                i = mid+1;
            }
            else if(v[mid]>target)
                j = mid-1;
            else 
                i = mid+1;
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = findFirst(nums,target);
        int last = findLast(nums,target);
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        
        return v;
    }
};