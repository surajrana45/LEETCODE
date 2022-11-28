class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       
        int n=matches.size();
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[matches[i][1]]++;
        }
        vector<vector<int>>ans;
        vector<int>z;
        vector<int>o;
        for(int i=0;i<n;i++)
        {
            if(mp[matches[i][1]]==1){
                o.push_back(matches[i][1]);
                mp[matches[i][1]]=2;
            }
            if(mp[matches[i][0]]==0){
                z.push_back(matches[i][0]);
                 mp[matches[i][0]]=2;
            }
        }
        sort(z.begin(),z.end());
        sort(o.begin(),o.end());
        ans.push_back(z);
        ans.push_back(o);
        
        return ans;
    }
};