class Solution {
public:
    int lengthOfLastWord(string s) {
        
        reverse(s.begin(),s.end());
        
        int j=0;
        while(s[j] == ' ')
        {
            j++;
        }
        
        int i=0;
       
        while(j<s.length())
        {
            i++;
            j++;
            if(s[j] == ' ')
                break;
        }
       return i;
    }
};