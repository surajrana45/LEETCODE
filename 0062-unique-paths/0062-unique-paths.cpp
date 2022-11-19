class Solution {
public:
    
    int helper(vector<vector<int>>&v,int i,int j,int m,int n,  vector<vector<int>>&dp)
    {
        if(i>m || j>n) return 0;
        
        if(i == m && j==n) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        return dp[i][j] = helper(v,i+1,j,m,n,dp) + helper(v,i,j+1,m,n,dp);
    }
    
    
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n));
        vector<vector<int>>dp(m,vector<int>(n,-1));
       return helper(v,0,0,m-1,n-1,dp); 
    }
};