class Solution {
public:
    
    int helper(string&s1,string&s2,int ind1,int ind2,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)
            return 0;
        
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        
        if(s1[ind1]==s2[ind2])
            return dp[ind1][ind2] = 1+helper(s1,s2,ind1-1,ind2-1,dp);
        else{
            return dp[ind1][ind2] = 0+max(helper(s1,s2,ind1-1,ind2,dp),helper(s1,s2,ind1,ind2-1,dp));
        }
    }
    
    int longestPalindromeSubseq(string s1) {
        
        vector<vector<int>>dp(s1.length(),vector<int>(s1.length(),-1));
        string s2 = s1;
        reverse(s1.begin(),s1.end());
        return helper(s1,s2,s1.length()-1,s1.length()-1,dp);
    }
};