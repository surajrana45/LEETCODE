class Solution {
public:
    
    void helper(int ind,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>temp)
    {
        
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<arr.size();i++)
        {
            if(arr[i]>target)
                break;
            
            if(i>ind && arr[i] == arr[i-1])
                continue;
            
            temp.push_back(arr[i]);
            helper(i+1,target-arr[i],arr,ans,temp);
            temp.pop_back();
            
        }
        
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        helper(0,target,candidates,ans,temp);
        return ans;
            
    }
};