class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_map<char,int>mp;
        char arr[]={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<10;i++)
        {
            mp[arr[i]]++;
        }
        int i=0;
        int j=s.length();
        while(i<j)
        {
            if(mp.find(s[i])!=mp.end() && mp.find(s[j])!=mp.end())
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(mp.find(s[i])!=mp.end())
                j--;
            else
                i++;
        }
        return s;
    }
};