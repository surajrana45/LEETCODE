class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        
        if(p.length() > s.length())
            return {};
     
        vector<int>ans;
        
        for(int i=0;i<=s.length()-p.length();i++)
        {
            int arr[26] = {0};
            
            int l = i;
            for(int j=0;j<p.length();j++)
            {
                arr[p[j]-'a']++;
                arr[s[l]-'a']--;
                
                l++;
            }
            int k;
            for(k=0;k<26;k++)
            {
                if(arr[k]>0 || arr[k]<0)
                    break;
            }
            if(k == 26)
                ans.push_back(i);
        }
        
        return ans;
    }
};