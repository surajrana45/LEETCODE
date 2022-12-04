class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        
        int n=nums.size();
        vector<long long>pre(n,0);
        vector<long long>suff(n,0);
        
        pre[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=(pre[i-1]+nums[i]);
        }
      
        suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            suff[n-i-1]=(suff[n-i]+nums[n-i-1]);
        }
       
        vector<long long>ans;
        for(int i=0;i<n-1;i++)
        {
            int temp=abs(pre[i]/(i+1)-suff[i+1]/(n-i-1));
            ans.push_back(temp);
        }
        ans.push_back(pre[n-1]/n);
       
        int res=0;
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]<ans[res])
                res=i;
        }
        return res;
    }
};