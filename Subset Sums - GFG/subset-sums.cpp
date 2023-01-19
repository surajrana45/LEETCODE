//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:

    void helper(vector<int>&arr,vector<int>&sum,int n,int currsum,int ind) {
        if(ind==n){
            sum.push_back(currsum);
            return;
        };
        helper(arr,sum,n,currsum+arr[ind],ind+1);
        helper(arr,sum,n,currsum,ind+1);
        
        return;
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>sum;
        //sum.push_back(0);
        helper(arr,sum,N,0,0);
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends