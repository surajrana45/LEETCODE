//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	   // for(int i=1;i<=m;i++)
	   // {
	   //     int x = pow(i,n);
	       
	   //     if(x==m)
	   //     {
	   //         return i;
	   //     }
	   //     if(x>m)return -1;
	   // }
	   // return -1;
	   int i=1;
	   int j=m;
	   while(i<=j)
	   {
	       int mid=(i+j)/2;
	       if(pow(mid,n)==m)return mid;
	       else if(pow(mid,n)>m)j=mid-1;
	       else i=mid+1;
	   }
	   return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends