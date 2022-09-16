class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        int arr[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']++;
        }
        
        set<char>set;
        
        vector<int>ans;
        int cnt = 0;
        int charcnt = 0;
        for(int i=0;i<s.length();i++)
        {
            cnt++;
            set.insert(s[i]);
            arr[s[i]-'a']--;
    
            if(arr[s[i]-'a'] == 0)
                charcnt++;
            
            if(charcnt == set.size())
            {
                ans.push_back(cnt);
                cnt = 0;
                charcnt = 0;
                set.clear();
            }
            
        }
        return ans;
        
    }
};