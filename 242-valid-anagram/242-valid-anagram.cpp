class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int arr[256] = {0};
        int l1 = s.length();
        int l2 = t.length();
        
        if(l1 != l2)
            return false;
        
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]]++;
        }
        for(int i=0;i<t.length();i++)
        {
            arr[t[i]]--;
        }
        
        for(int i=0;i<256;i++)
        {
            if(arr[i]>0)
                return false;
        }
        
        return true;
    }
};