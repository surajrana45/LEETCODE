//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    long long ans=0;
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    void merge(int l,int mid,int r,long long arr[])
    {
        int i=l;
        int j=mid+1;
        long long temp[r+1];
        int k=0;
        while(i<=mid && j<=r)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else {
                ans+=(mid-i+1);
                temp[k++]=arr[j++];
            }
        }
        
        while(i<=mid)
        {
            temp[k++]=arr[i++];
        }
        while(j<=r)
        {
            temp[k++]=arr[j++];
        }
        
        for(int i=l;i<=r;i++)
        {
            arr[i]=temp[i-l];
        }
    }
    
    
    void helper(int l,int r, long long arr[])
    {
        if(l>=r) return;
        int mid = (l+r)/2;
        helper(l,mid,arr);
        helper(mid+1,r,arr);
        
        merge(l,mid,r,arr);
        
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        int l=0;
        int r=N-1;
        helper(l,r,arr);
        
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends