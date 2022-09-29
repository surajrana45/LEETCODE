class Solution {
public:
    
    static bool cmp(pair<char,int>p1,pair<char,int>p2)
    {
        return p1.second>p2.second;
    }
    
    string frequencySort(string s) {
       
       map<char,int>mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        
        vector<pair<char,int>>v;
        
        for(auto it:mp)
        {
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),cmp);
        
        string str = "";
        for(int i=0;i<v.size();i++)
        {
            while(v[i].second>0)
            {
                str.push_back(v[i].first);
                v[i].second--;
            }
        }
        
        return str;

    }
};