class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
       int indS[129] = {0};
        
       int indT[129] = {0};
       
       for(int i=0;i<s.length();i++)
       {
           if(indS[s[i]] != indT[t[i]])
               return false;
           
           indS[s[i]] = indT[t[i]] = i+1;
       }
        
        return true;
        
    }
};