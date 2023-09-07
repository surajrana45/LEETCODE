//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       if(n==1)return {1};
        vector<long long>lp(n);
        vector<long long>rp(n);
        long long p=1;
        for(int i=0;i<n;i++)
        {
            p=p*nums[i];
            lp[i]=p;
        }
        p=1;
        for(int i=n-1;i>=0;i--)
        {
            p=p*nums[i];
            rp[i]=p;
        }
        vector<long long>ans(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i]=rp[i+1];
            }
            else if(i==n-1)
            {
                ans[i]=lp[i-1];
            }
            else{
                ans[i]=lp[i-1]*rp[i+1];
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends