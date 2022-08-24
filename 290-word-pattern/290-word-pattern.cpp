class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
//         if(pattern.length() != s.length())
//             return false;
        
        unordered_map<char,string>mp;
        int j = 0;
        string s1("");
        vector<string>v;
        set<string>se;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == ' ')
            {
                v.push_back(s1);
                s1.clear();
                continue;
            }
            s1.push_back(s[i]);
        }
        v.push_back(s1);
        
        if(v.size() != pattern.length())
            return false;
        
        for(auto t:v)
        {
            if(mp.find(pattern[j]) != mp.end())
            {
                if(mp[pattern[j]] != t)
                     return false;
            }
            else{
                if(se.count(t)>0)
                    return false;
                mp[pattern[j]] = t;
                se.insert(t);
            }
            j++;
        }
        
        
        
        return true;
        
    }
};