class Solution {
public:
    
    static bool compa(pair<string,int> a,pair<string,int> b)
    {
        if(a.second == b.second)
            return a<b;
        return a.second>b.second;
    }
    
   static bool comp(string a,string b)
    {
        return a<b;
    }
    
 vector<pair<string,int>> sorti(unordered_map<string,int>&mp)
    {
        vector<pair<string,int>>v;
        
        for(auto&it:mp)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end(),compa);
     
        return v;    
            
    }
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        //sort(words.begin(),words.end(),compare);
        
        unordered_map<string,int>mp;
        
        for(int i=0;i<words.size();i++)
        {
            mp[words[i]]++;
        }
        
       vector<pair<string,int>>v =  sorti(mp);
        
        vector<string>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
           
       // sort(ans.begin(),ans.end(),comp);
        return ans;
    }
};