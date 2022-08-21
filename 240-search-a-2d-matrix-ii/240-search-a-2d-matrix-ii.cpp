class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        
        int n = m.size();
        int j = m[0].size()-1;
        int i = 0;
        
        while(i<n && j>=0)
        {
            if(m[i][j]>target)
                j--;
            else if(m[i][j]<target)
                i++;
            else
                return true;
        }
        return false;
    }
};