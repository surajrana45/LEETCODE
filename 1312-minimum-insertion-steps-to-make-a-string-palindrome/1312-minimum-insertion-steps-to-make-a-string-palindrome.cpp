class Solution {
public:
    
    int helper(string&s1,string&s2,int i,int j, vector<vector<int>>&dp)
    {
        if(i<0 || j<0)
            return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s1[i]==s2[j]) return dp[i][j] = 1+helper(s1,s2,i-1,j-1,dp);
        
        else
        {
            return dp[i][j] = 0+max(helper(s1,s2,i-1,j,dp),helper(s1,s2,i,j-1,dp));
        }
    }
    
    
    int minInsertions(string s1) {
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        vector<vector<int>>dp(s1.length(),vector<int>(s1.length(),-1));
        
        return s1.length()-helper(s1,s2,s1.length()-1,s1.length()-1,dp);
    }
};