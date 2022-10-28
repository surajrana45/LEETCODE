class Solution {
public:
    
    bool pallin(string s,int st,int end)
    {
        while(st<=end)
        {
            if(s[st]!=s[end])
                return false;
            st++;
            end--;
        }
        return true;
    }
    
    void func(string s,int ind, vector<vector<string>>&res, vector<string>&temp)
    {
        if(ind==s.size())
        {
            res.push_back(temp);
            return;
        }
        
        for(int i=ind;i<s.size();i++)
        {
            if(pallin(s,ind,i))
            {
                temp.push_back(s.substr(ind,i-ind+1));
                func(s,i+1,res,temp);
                temp.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>temp;
        
        func(s,0,res,temp);
        return res;
    }
};