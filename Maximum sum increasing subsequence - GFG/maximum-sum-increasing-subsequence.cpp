//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	int helper(int arr[],int prev,int ind,int n,vector<vector<int>>&dp)
	{
	    if(ind == n-1)
	    {
	        if(arr[prev]<arr[ind]) return arr[ind];
	        return 0;
	    }
	    
	    if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
	    
	    int pick=0;
	    int npick=0;
	    
	    if(prev == -1 || arr[prev]<arr[ind])
	    {
	        pick = arr[ind]+helper(arr,ind,ind+1,n,dp);
	    }
	    npick = helper(arr,prev,ind+1,n,dp);
	    
	    return dp[ind][prev+1] = max(pick,npick);
	}
	
	
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>>dp(n,vector<int>(n+1,-1));
	    return helper(arr,-1,0,n,dp);
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends