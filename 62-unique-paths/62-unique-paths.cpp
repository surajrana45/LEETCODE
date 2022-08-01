class Solution {
public:
    
    int helper(int**grid,int m,int n,int i,int j)
    {
        if(i == m-1 && j == n-1)
            return 1;
        
        if(i>=m || j>=n)
            return 0;
        
        if(grid[i][j] != -1)
            return grid[i][j];
        
        int right = helper(grid,m,n,i,j+1);
        int down = helper(grid,m,n,i+1,j);
        
        int ans = right+down;
        grid[i][j] = ans;
        
        return ans;
    }
    
    
    int uniquePaths(int m, int n) {
        
        int**grid = new int*[m];
        for(int i=0;i<m;i++)
        {
            grid[i] = new int[n];
            for(int j = 0;j<n;j++)
            {
                grid[i][j] = -1;
            }
        }
        
        return helper(grid,m,n,0,0);
    }
};