class Solution {
public:
    
     vector<int>frequency(string& word)
     {
         vector<int>freq(26);
         
         for(auto& w:word)
         {
             freq[w-'a']++;
         }
         return freq;
     }
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
         vector<string>ans;
         vector<int>maxFreq(26);
        for(auto& word:words2)
        {
            vector<int>freq = frequency(word);
            
            for(int i=0;i<26;i++)
            {
                maxFreq[i] = max(freq[i],maxFreq[i]);
            }
            
        }
        
        for(auto& word:words1)
        {
            vector<int>freq = frequency(word);
            int i;
            for(i=0;i<26;i++)
            {
                if(maxFreq[i]>freq[i])
                {
                    break;
                }
            }
            if(i == 26)
                ans.push_back(word);
        }
        return ans;
    }
};