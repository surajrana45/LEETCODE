class Solution {
public:
    
    int helper(string&s1,string&s2,int i,int j,vector<vector<int>>&dp)
    {
        if(j<0) return 1;
        if(i<0) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]) return dp[i][j] = helper(s1,s2,i-1,j-1,dp)+helper(s1,s2,i-1,j,dp);
        else 
            return dp[i][j] = helper(s1,s2,i-1,j,dp);
    }
    
    
    
    int numDistinct(string s1, string s2) {
        
        vector<vector<int>>dp(s1.length(),vector<int>(s2.length(),-1));
        return helper(s1,s2,s1.length()-1,s2.length()-1,dp);
    }
};