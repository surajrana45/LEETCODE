class Solution {
public:
    string reverseWords(string s) {
        
        int i = 0;
        int j = 0;
        while(j<=s.length())
        {
            if(s[j] == ' ' || s[j] == '\0')
            {
                int k = j-1;
                while(i<k)
                {
                    swap(s[i],s[k]);
                        i++;
                        k--;
                }
                i = j+1;
                j++;
            }
            else{
                j++;
            }
        }
        return s;
    }
};