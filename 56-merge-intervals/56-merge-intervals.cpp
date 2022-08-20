class Solution {
public:
    
    static bool cmp(vector<int>a,vector<int>b)
    {
        return a[0]<b[0];
    }
    
    
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        sort(v.begin(),v.end(),cmp);
        vector<vector<int>>ans;
        int i=0;
         
        int mini = v[i][0];
        int maxi = v[i][1];
        i=1;
        while(i<v.size())
        {
            if(maxi>=v[i][0]){
             
                maxi = max(maxi,v[i][1]);
                i++;
            }
            else
            {
                ans.push_back(vector<int>{mini,maxi});
                mini=v[i][0];
                maxi = v[i][1];
                i++;
            }
        }
        ans.push_back(vector<int>{mini,maxi});
        
        
        return ans;
    }
};