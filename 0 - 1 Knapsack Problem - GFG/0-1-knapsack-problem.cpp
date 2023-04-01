//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int helper(int w,int wt[],int val[],int n,int ind,vector<vector<int>>&dp)
    {
        if(ind == n-1)
        {
            if(w>=wt[ind]) return val[ind];
            return 0;
        }
        
        if(dp[ind][w]!=-1) return dp[ind][w];
        
        int pick=0;
        int npick=0;
        if(w>=wt[ind])
        {
            pick = val[ind]+helper(w-wt[ind],wt,val,n,ind+1,dp);
        }
        npick = helper(w,wt,val,n,ind+1,dp);
        
        return dp[ind][w] = max(pick,npick);
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n,vector<int>(W+1,-1));    
       return helper(W,wt,val,n,0,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends