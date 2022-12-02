class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>mp1;
         map<char,int>mp2;
        if(word1.length()!=word2.length()) return false;
        for(auto it:word1)
        {
            mp1[it]++;
        }
        for(auto it:word2)
        {
            mp2[it]++;
        }
        sort(word1.begin(),word1.end());
        sort(word2.begin(),word2.end());
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<word2.length();i++)
        {
            
            if(i>0 && word2[i]==word2[i-1])
                continue;
            
            //cout<<it;
            if(mp1.find(word2[i])==mp1.end())
            {
              return false;
            }
           v1.push_back(mp1[word2[i]]);
        }
        for(int i=0;i<word1.length();i++)
        {
            
            if(i>0 && word1[i]==word1[i-1])
                continue;
            
            //cout<<it;
            if(mp2.find(word1[i])==mp2.end())
            {
              return false;
            }
             v2.push_back(mp2[word1[i]]);
           
        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
            
        
        
        return true;
    }
};