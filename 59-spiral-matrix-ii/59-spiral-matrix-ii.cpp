class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>>v(n ,vector<int>(n));
        
        int top=0;
        int right = n-1;
        int bottom = n-1;
        int left = 0;
        
        int total = n*n;
        int count = 0;
        while(top<=bottom && left<=right)
        {
            for(int i=top;i<=right;i++)
            {
                v[top][i] = count+1;
                count++;
            }
            top++;
            
            if(count >=total)
                break;
            
            for(int i=top;i<=bottom;i++)
            {
                v[i][right] = count+1;
                count++;
            }
            right--;
            
             if(count >= total)
                break;
            for(int i = right;i>=left;i--)
            {
                v[bottom][i] = count+1;
                count++;
            }
            bottom--;
             if(count >= total)
                break;
            
            for(int i=bottom;i>=top;i--)
            {
                v[i][left] = count+1;
                count++;
            }
            left++;
             if(count >= total)
                break;
        }
        return v;
    }
};