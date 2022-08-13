class Solution {
public:
    string mergeAlternately(string w1, string w2) {
       
        int i=0;
        int j=0;
        
        string ans;
        
        while(i<w1.length() && j<w2.length())
        {
            ans +=string()+w1[i]+w2[j];
            i++;
            j++;
        }
        while(i<w1.length())
        {
            ans+=string()+w1[i];
            i++;
        }
         while(j<w2.length())
        {
            ans+=string()+w2[j];
            j++;
        }
        
        return ans;
    }
};