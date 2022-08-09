class Solution {
public:
    
    int helper(int**arr,int m,int n,int i,int j)
    {
        
       for(int k=0;k<m;k++)
       {
           for(int l = 0;l<n;l++)
           {
               if(k ==m-1 || l==n-1)
                   arr[k][l] = 1;
           }
       }
        
        for(int k=m-2;k>=0;k--)
        {
            for(int l = n-2;l>=0;l--)
                arr[k][l] = (arr[k][l+1]+arr[k+1][l]);
        }
        
        return arr[0][0];
        
        
    }
    
    
    int uniquePaths(int m, int n) {
        
        int **arr = new int*[m];
        for(int i=0;i<m;i++)
        {
            arr[i] = new int[n];
            for(int j=0;j<n;j++)
            {
                arr[i][j] = -1;
            }
        }
        
        int ans = helper(arr,m,n,0,0);
        return ans;
    }
};