//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution {
public:

   void helper(vector<vector<int>>&matrix,int x,int y,int m,int n,int path,int& ans)
   {
       if(x<0 || x>=matrix.size() || y<0 || y>=matrix[0].size() || matrix[x][y]!=1) return;
       if(x==m && y==n) 
       {
           if(path>ans) ans=path;
           return;
       }
       
       matrix[x][y]=2;
       
       helper(matrix,x,y-1,m,n,path+1,ans);
       helper(matrix,x,y+1,m,n,path+1,ans);
       helper(matrix,x+1,y,m,n,path+1,ans);
       helper(matrix,x-1,y,m,n,path+1,ans);
       
       matrix[x][y]=1;
   }


    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        int ans=-1;
        helper(matrix,xs,ys,xd,yd,0,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends