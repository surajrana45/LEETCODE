//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
  
    int binarySearch(int arr[],int n,int target)
    {
        int cnt=0;
        int i=0;
        int j=n-1;
        
        while(i<=j)
        {
            int mid = i+(j-i)/2;
            
            if(arr[mid]<=target)
            {
                cnt+=(mid-i)+1;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return cnt;
    }
  
  
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[],  int m, int n)
    {
       sort(arr2,arr2+n);
       vector<int>v;
       
       for(int i=0;i<m;i++)
       {
           int x = arr1[i];
           int cnt = binarySearch(arr2,n,x);
           v.push_back(cnt);
       }
       return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends