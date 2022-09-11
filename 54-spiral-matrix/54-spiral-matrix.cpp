class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        int top = 0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        int left = 0;
        int total = (right+1)*(bottom+1);
       // cout<< matrix[0].size()<<" "<<matrix.size()<<endl;
        vector<int>ans;
        int count = 0;
        while(top<=bottom && left<=right)
        {
            for(int i=top;i<=right;i++)
            {
                count++;
                ans.push_back(matrix[top][i]);
            }
            top++;
            
            if(count == total)
                break;
            
            for(int i=top;i<=bottom;i++)
            {
                count++;
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(count == total)
                break;
            
           // if(right>=left){
            for(int i=right;i>=left;i--)
            {
                count++;
                ans.push_back(matrix[bottom][i]);
            }
           // }
            bottom--;
            if(count == total)
                break;
            
           // if(bottom>=top){
            for(int i=bottom;i>=top;i--)
            {
                count++;
                ans.push_back(matrix[i][left]);
            }
           // }
            left++;
            if(count == total)
                break;
        }
        return ans;
    }
};