class Solution {
public:
    
    int helper(vector<int>v,int s,int* arr)
    {
        if(s >= v.size())
            return 0;
        
        if(arr[s]!=-1)
            return arr[s];
        
        
        arr[s] = (v[s]+min(helper(v,s+1,arr),helper(v,s+2,arr)));
        return arr[s];
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        int *arr = new int[cost.size()];
        for(int i =0;i<cost.size();i++)
        {
            arr[i] = -1;
        }
        
        int ans = helper(cost,0,arr);
        int ans1= helper(cost,1,arr);
        
        return min(ans,ans1);
    }
};