class Solution {
public:
    
    int helper(vector<vector<int>>& grid,vector<vector<int>>&dp,int i,int j)
    {
        if(i>=0 && j>=0 && grid[i][j] == 1){
            return 0;
        }
        if(i == 0 && j == 0)
            return 1;
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int total = helper(grid,dp,i,j-1)+helper(grid,dp,i-1,j);
        return dp[i][j] = total;
        
    }
    
    
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        
        int n = Grid.size();
        int m = Grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return helper(Grid,dp,n-1,m-1);
    }
};