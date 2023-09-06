//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int>lans(n);
        vector<int>rans(n);
        lans[0]=arr[0];
        rans[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        {
            int maxi = max(lans[i-1],arr[i]);
           
            lans[i]=maxi;
        }
       
        for(int i=n-2;i>=0;i--)
        {
            int maxi = max(rans[i+1],arr[i]);
           
            rans[i]=maxi;
        }
        long long ans=0;
       
        for(int i=0;i<n;i++)
        {   
            int mini = min(lans[i],rans[i]);
           
            ans+=mini-arr[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends