class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        int j = matrix[0].size()-1;
        int i = 0;
        
        int n = matrix.size();
       
        
        while(i<n && j>=0)
        {
           if(matrix[i][j] > target)
           {
               j--;
           }
           else if(matrix[i][j] < target)
           {
               i++;
           }
            else
                return true;
        }
        return false;
    }
};