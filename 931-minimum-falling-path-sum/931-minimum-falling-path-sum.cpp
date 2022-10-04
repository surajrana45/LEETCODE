class Solution {
public:
    int helper(vector<vector<int>>&matrix,int n,int i,int j,vector<vector<int>>&v)
    {
       if(i == n-1)
           return matrix[i][j];
        
        
        if(v[i][j]!=-1)
            return v[i][j];
        
       
         int bottom = INT_MAX;
         int left = INT_MAX;
         int right = INT_MAX;
        
        if(j+1<n)
        {
            right = helper(matrix,n,i+1,j+1,v);
        }
        if(j-1>=0)
        {
          left = helper(matrix,n,i+1,j-1,v);
        }
        bottom = helper(matrix,n,i+1,j,v);
        
        v[i][j] =matrix[i][j] + min(bottom,min(left,right));
        return v[i][j];
        
    }
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>v(n,vector<int> (n, -1));
        int sum = INT_MAX;
        for(int i=0;i<n;i++){
            sum = min(sum,helper(matrix,n,0,i,v));
        }
        return sum;
    }
};