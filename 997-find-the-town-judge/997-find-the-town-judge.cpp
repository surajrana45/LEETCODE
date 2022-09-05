class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        unordered_map<int,int>mp;
        
        if(n == 1)
            return n;
        
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
            mp[trust[i][0]]--;
        }
        
        for(auto it:mp)
        {
            if(it.second == (n-1))
                return it.first;
        }
        return -1;
    }
};