class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        
        int n = m.size();
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<(n/2);j++)
            {
                swap(m[i][j],m[i][n-j-1]);
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<n-i-1;j++)
           {
              
               swap(m[i][j],m[n-j-1][n-i-1]);
           }
        }
        
    }
};