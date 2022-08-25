class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        vector<string>temp;
        vector<vector<string>>ans(strs.size(),vector<string>());
        
        unordered_map<string,int>mp(strs.size());
        
        int k=0;
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
           // temp.push_back(strs[i]);
            if(mp.find(s) != mp.end())
            {
                ans[mp[s]].push_back(strs[i]);
            }
            else{
                ans[k].push_back(strs[i]);
                mp[s] = k;
                k++;
            }
        }
        
        int i = ans.size()-1;
        while(ans[i].size() == 0)
        {
            ans.pop_back();
            i--;
        }
        
        
        return ans;
    }
};