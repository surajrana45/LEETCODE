class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(needle.length() == 0)
            return 0;
        
        if(needle.length()>haystack.length())
            return -1;
        
        int j;
        
        for(int i=0;i<haystack.length();i++)
        {
            j = i;
            int k =0;
            while(j<haystack.length() && k<needle.length() && haystack[j++] == needle[k++])
            {
                if(k == needle.length())
                    return i;
            }
        }
        return -1;
    }
};