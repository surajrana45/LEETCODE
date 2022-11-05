class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n][5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(i==0)
                    dp[i][j]=1;
               
                if(j==4)
                    dp[i][j]=1;
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=3;j>=0;j--)
            {
                dp[i][j] = dp[i-1][j]+dp[i][j+1];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                if(i==n-1)
                    sum+=dp[i][j];
            }
        }
        return sum;
    }
};