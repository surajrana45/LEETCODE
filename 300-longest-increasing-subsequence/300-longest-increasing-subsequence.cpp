class Solution {
public:
    
    int helper(vector<int>&v)
    {
        vector<int>ans(v.size());
        ans[0] = 1;
        
        for(int i=1;i<v.size();i++)
        {
           ans[i] = 1;
            int maxi = 0;
            for(int j = i-1;j>=0;j--)
            {
                if(v[j]>=v[i])
                    continue;
                maxi = max(ans[j],maxi);
            }
            ans[i] += maxi;
        }
        int best = 0;
        for(int i=0;i<ans.size();i++)
        {
            best = max(best,ans[i]);
        }
        return best;
    }
    
    
    int lengthOfLIS(vector<int>& nums) {

        return(helper(nums));
    
    }
};