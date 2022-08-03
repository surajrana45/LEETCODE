class Solution {
public:
    int longestPalindrome(string s) {
        
        map<char,int>mp;
        int result = 0;
        
        for(int i=0; i<s.length();i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]%2==0)
            {
                result = result+mp[s[i]];
                mp[s[i]] = 0;
            }
        }
        
        for(auto x:mp)
        {
            if(x.second == 1){
                result++;
                break;
            }
            
        }
        
        return result;
    }
};