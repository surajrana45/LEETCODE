//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        int arr1[n] = {0};
        int arr2[n] = {0};
        
        if(n==1) return 1;
        
        int temp1=0;
        int temp2=0;
        int i=0;
        int j=n-1;
        while(i<n)
        {
            temp1+=a[i];
            arr1[i]=temp1;
            
            i++;
        }
        
        while(j>=0)
        {
            temp2+=a[j];
            arr2[j]+=temp2;
            j--;
        }
        
        //int ans=0;
        i=1;
        j=1;
        while(i<n-1 && j<n-1)
        {
            if(arr1[i-1] == arr2[i+1])
            {
                 return i+1;
            }
            i++;
            j++;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends