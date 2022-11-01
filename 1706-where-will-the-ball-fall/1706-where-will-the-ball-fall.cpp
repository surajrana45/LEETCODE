class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        vector<int>ans;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int j=0;j<m;j++)
        {
            int cpos = j;
            int npos=-1;
            int i;
            for(i=0;i<n;i++)
            {
               npos=cpos+grid[i][cpos];
                
                if(npos<0 || npos>=m || grid[i][cpos]!=grid[i][npos])
                {
                    ans.push_back(-1);
                    break;
                }
                cpos=npos;
            }
            if(i==n)
                ans.push_back(cpos);
        }
        return ans;
    }
};