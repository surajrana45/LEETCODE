class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        if(c.size() == 1 )
            return false;
        if(c.size() == 2)
            return true;
        
        
        int x0 = c[0][0];
        int y0 = c[0][1];
        
        int dx = c[1][0] - x0;
        int dy = c[1][1] - y0;
        
        for(int i=1;i<c.size();i++)
        {
            int x = c[i][0],y = c[i][1];
            
            if(dx*(y-y0) != dy*(x-x0))
                return false;
        }
          return true;
        }
        
};