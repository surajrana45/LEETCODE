class Solution {
public:
    
    int helper(vector<int>&v,int ind,int*ans)
    {
        if(ind >= v.size())
        {
            return 0;
        }
        
        if(ans[ind] != -1)
            return ans[ind];
        
        
    
        int a = v[ind]+helper(v,ind+1,ans);
        int b = v[ind]+helper(v,ind+2,ans);  
        
        ans[ind] = min(a,b);
        return min(a,b);
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int*ans = new int[cost.size()+1];
        for(int i=0;i<=cost.size();i++)
        {
            ans[i] = -1;
        }
        
        int a = helper(cost,0,ans);
        int b = helper(cost,1,ans);
        
        return min(a,b);
    }
};