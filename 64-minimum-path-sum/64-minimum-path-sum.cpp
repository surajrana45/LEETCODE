class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
       
        
        for(int j = m-2;j>=0;j--)
        {
            grid[n-1][j] = grid[n-1][j+1]+grid[n-1][j];
        }
        
        for(int i = n-2;i>=0;i--)
        {
            grid[i][m-1] = grid[i][m-1] + grid[i+1][m-1];
        }
        
        for(int i = n-2;i>=0;i--)
        {
            for(int j = m-2;j>=0;j--)
            {
                int sum1 = grid[i][j+1]+grid[i][j];
                int sum2 = grid[i+1][j]+grid[i][j];
                
                grid[i][j] = min(sum1,sum2);
            }
        }
        return grid[0][0];
    }
};