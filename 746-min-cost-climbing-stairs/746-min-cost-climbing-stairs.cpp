class Solution {
public:
    
    int helper(vector<int>cost,int ind,vector<int>&v)
    {
       if(ind == 0 || ind == 1)
       {
           return cost[ind];
       }
        if(v[ind]!=-1)
        {
            return v[ind];
        }
        v[ind] = cost[ind]+min(helper(cost,ind-1,v),helper(cost,ind-2,v));
        
        return v[ind];
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>v(cost.size(),-1);
        int first = helper(cost,n-1,v);
        int second = helper(cost,n-2,v);
        
        return min(first,second);
    }
};