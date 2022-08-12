class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int sum = 0;
        int n = mat.size();
        int i=0;
        int j=0;
        
        while(i<n)
        {
            sum+=mat[i][j];
            i++;
            j++;
        }
        j = n-1;
        i=0;
        while(j>=0)
        {
            sum+=mat[i][j];
            i++;
            j--;
        }
        
        if(n%2!=0)
        {
            int i = n/2;
            sum -=mat[i][i];
        }
        return sum;
    }
};