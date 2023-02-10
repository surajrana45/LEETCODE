//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {  
        int maxi=0;
        map<int,int>mp;
        int sum=0;
        //mp[0]=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum!=0){
            if(mp.find(sum)!=mp.end())
            {
                int temp = i-mp[sum];
                maxi = max(temp,maxi);
            }
            else{
                mp[sum] = i;
            }
            }
            else{
                maxi = max(maxi,i+1);
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends