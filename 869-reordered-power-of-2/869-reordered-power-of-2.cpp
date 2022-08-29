class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string s = to_string(n);
        sort(s.begin(),s.end());
        
        vector<string>v;
        
        for(int i=0;i<=30;i++)
        {
            int temp = pow(2,i);
            v.push_back(to_string(temp));
            sort(v[i].begin(),v[i].end());
        }
        
        
        for(int i=0;i<=30;i++)
        {
            if(v[i] == s)
                return true;
        }
          
        return false;
    }
};