class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
       
        vector<int>v;
        if(p.length()>s.length())
            return {};
        
        for(int i=0;i<=s.length()-p.length();i++)
        {
             int arr[26] = {0};
            int l = i;
            for(int j = 0;j<p.length();j++)
            {
                arr[p[j]-'a']++;
                arr[s[l]-'a']--;
                l++;
            }
            int flag = 0;
            for(int k=0;k<26;k++)
            {
                if(arr[k]>0 || arr[k]<0)
                    flag = 1;
            }
            if(flag == 0){
            v.push_back(i);
            }
        }
        return v;
    }
};