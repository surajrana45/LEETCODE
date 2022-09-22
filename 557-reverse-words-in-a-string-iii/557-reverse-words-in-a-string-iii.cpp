class Solution {
public:
    string reverseWords(string s) {
        
        int i = 0;
        int j = 0;
        while(j<s.length())
        {
            if(s[j] == ' ')
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
        j--;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
                
        }
        return s;
    }
};