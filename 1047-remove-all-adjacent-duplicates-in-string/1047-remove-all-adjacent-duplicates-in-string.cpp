class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
        
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else{
            char t = st.top();
            if(t == s[i])
            {
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            }
        }
        s = "";
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};