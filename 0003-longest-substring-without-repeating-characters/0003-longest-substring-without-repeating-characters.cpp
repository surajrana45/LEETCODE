class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;
        int cnt=0;
        int maxcnt = INT_MIN;
        
        if(s.length()==0)
            return 0;
        if(s.length()==1)
            return 1;
        
        int i=0;
        int j=0;
       
        while(j<s.length())
        {
          if(mp.find(s[j])!=mp.end())
          {
              while(mp.find(s[j])!=mp.end())
              {
                  mp.erase(s[i]);
                  i++;
              }
              mp[s[j]]++;
              cnt = j-i+1;
          }
            else
            {
                mp[s[j]]++;
                cnt = j-i+1;
            }
            maxcnt = max(maxcnt,cnt);
            j++;
        }
         maxcnt = max(maxcnt,cnt);
       
        return maxcnt;
    }
};