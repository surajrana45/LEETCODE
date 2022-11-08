class Solution {
public:
    string makeGood(string s) {
        
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
           else{
            char temp=st.top();
            if(abs(temp-s[i])==32)
                st.pop();
            else
                st.push(s[i]);
           }
        }
        string str="";
        while(!st.empty())
        {
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};