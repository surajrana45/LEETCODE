class Solution {
public:
    string freqAlphabets(string s) {
        
        int n = s.length();
        int i=0;
        string ans = "";
        
        while(i<n)
        {
            if((i+2)<n && s[i+2] == '#')
            {
                int temp = (s[i]-'0')*10 + (s[i+1]-'0');
                ans += char(temp+'a'-1);
                i=i+3;
            }
            else
            {
                ans += char(s[i]-'0'+'a'-1);
                i++;
            }
        }
        return ans;
    }
};