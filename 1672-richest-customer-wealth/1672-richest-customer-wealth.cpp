class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        int sum = 0;
        
        for(int i=0;i<v.size();i++)
        {
            int temp = 0;
            for(int j=0;j<v[i].size();j++)
            {
                temp+=v[i][j];
            }
            sum = max(sum,temp);
        }
        return sum;
    }
};