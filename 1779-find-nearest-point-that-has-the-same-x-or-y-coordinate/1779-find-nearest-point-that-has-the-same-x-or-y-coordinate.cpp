class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& v) {
        
        int mini = INT_MAX;
        
       int ind = -1;
        
        for(int i=0;i<v.size();i++)
        {
            for(int j =0;j<1;j++)
            {
                if(v[i][j] == x || v[i][j+1] == y)
                {
                    int sum = abs((x-v[i][j])+(y-v[i][j+1]));
                    if(mini>sum)
                    {
                        mini = sum;
                        ind = i;
                    }
                }
            }
        }
        return ind;
        
    }
};