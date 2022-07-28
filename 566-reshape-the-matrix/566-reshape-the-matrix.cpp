class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int l = mat.size();
        int n = mat[0].size();
     
        int m = r*c;
        
        if(m != n*l)
            return mat;
        
        vector<vector<int>>ans;
        int k = 0;
        vector<int>temp;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                temp.push_back(mat[i][j]);
                k++;
                if(k == c)
                {
                    ans.push_back(temp);
                    k=0;
                    temp.clear();
                }
            }
        }
        
        return ans;
    }
};