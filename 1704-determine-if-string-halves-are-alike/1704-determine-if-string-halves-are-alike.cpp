class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        int cnt1=0;
        int cnt2=0;
        while(i<n/2)
        {
            if(s[i]=='a' || s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                cnt1++;
            }
            if(s[j]=='a' || s[j]=='e'||s[j]=='o'||s[j]=='i'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
            {
                cnt2++;
            }
            i++;
            j--;
        }
        if(cnt1==cnt2)return true;
        return false;
    }
};