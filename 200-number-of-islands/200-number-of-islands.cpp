class Solution {
public:
    
    void mark(vector<vector<char>>&grid,int x,int y,int r,int c)
    {
        if(x<0 || x>=r || y<0 || y>=c || grid[x][y] != '1')
            return;
        
        grid[x][y] = '2';
        
        mark(grid,x,y+1,r,c);
        mark(grid,x,y-1,r,c);
        mark(grid,x-1,y,r,c);
        mark(grid,x+1,y,r,c);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
       
        int ans = 0;
        
        for(int i =0;i<grid.size();i++)
        {
            for(int j =0;j<grid[0].size();j++)
            {
                if(grid[i][j] == '1')
                {
                    mark(grid,i,j,grid.size(),grid[0].size());
                    ans++;
                }
            }
        }
        return ans;
    }
};