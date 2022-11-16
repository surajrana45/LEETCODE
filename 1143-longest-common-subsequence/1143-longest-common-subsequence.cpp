class Solution {
public:
    
    int helper(string& s1,string& s2,int ind1,int ind2,vector<vector<int>>&dp)
    {
        if(ind1<0 || ind2<0)
            return 0;
        
        if(dp[ind1][ind2]!=-1) return dp[ind1][ind2];
        
        int take=0;
        int nottake=0;
        if(s1[ind1]==s2[ind2])
            take = 1+helper(s1,s2,ind1-1,ind2-1,dp);
        
        else
        {
            nottake = 0+max(helper(s1,s2,ind1-1,ind2,dp),helper(s1,s2,ind1,ind2-1,dp));
        }
        return dp[ind1][ind2] = max(take,nottake);
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return helper(text1,text2,text1.length()-1,text2.length()-1,dp);
    }
};