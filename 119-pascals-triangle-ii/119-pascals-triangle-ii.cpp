class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>>ans;
        ans.push_back({1});
        if(rowIndex == 0)
            return ans[0];
        ans.push_back(vector<int>{1,1});
        if(rowIndex==1)
            return ans[1];
        
        
        for(int i=2;i<=rowIndex;i++)
        {
            vector<int>temp;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    temp.push_back(1);
                }
                
                else
                {
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(temp);
        }
        
        return ans[rowIndex];
    }
};