class Solution {
public:
    
    int helper(vector<vector<int>>& triangle,int n,int i,int j,vector<vector<int>>& dp)
    {
        if(i==n)return triangle[i][j];
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down = triangle[i][j]+helper(triangle,n,i+1,j,dp);
        int diag = triangle[i][j]+helper(triangle,n,i+1,j+1,dp);
        
        return dp[i][j] = min(down,diag);
    }
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(triangle,n-1,0,0,dp);
    }
};