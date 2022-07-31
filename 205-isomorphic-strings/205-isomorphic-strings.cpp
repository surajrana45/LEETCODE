class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length() != t.length())
            return false;
        
        map<char,int>mp1;
        map<char,int>mp2;
        
        for(int i =0;i<s.length();i++)
        {
           if(mp1[s[i]] != mp2[t[i]])
               return false;
            
            mp1[s[i]] = mp2[t[i]] = i+1;
        }
        
        return true;
        
       
    }
};