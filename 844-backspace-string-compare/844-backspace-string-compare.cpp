class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
        stack<char>s1;
        stack<char>s2;
        
        int i=0;
        int j=0;
        while(i<s.length())
        {
            if(s[i] == '#' && !s1.empty())
                s1.pop();
            else if(s[i]!='#')
                s1.push(s[i]);
            
            i++;
        }
         while(j<t.length())
        {
            if(t[j] == '#' && !s2.empty())
                s2.pop();
            else if(t[j]!='#')
                s2.push(t[j]);
            
            j++;
         }
        if(s1.size() != s2.size())
            return false;
        
        while(!s1.empty() && !s2.empty())
        {
            if(s1.top() != s2.top())
                return false;
            s1.pop();
            s2.pop();
        }
        return true;
    }
};