class Solution {
public:
    
    void helper(vector<vector<char>>&grid,int i,int j,int n,int m)
    {
        if(i>=n || i<0 || j>=m || j<0 || grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';
        helper(grid,i,j+1,n,m);
        helper(grid,i,j-1,n,m);
        helper(grid,i-1,j,n,m);
        helper(grid,i+1,j,n,m);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int cnt = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == '1')
                {
                    cnt++;
                    helper(grid,i,j,n,grid[i].size());
                }
            }
        }
        return cnt;
    }
};