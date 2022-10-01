class Solution {
public:
    int helper(string str,int ind,vector<int>&v)
    {
        if(ind >= str.length())
            return 1;
        
        if(str[ind] == '0')
            return v[ind]=0;

        if(v[ind]!=-1)
            return v[ind];
        
        int way1 = helper(str,ind+1,v);
    
        if(ind+1<str.length()&&(str[ind]=='1'||(str[ind]=='2'&& str[ind+1]<='6'))){
            way1 += helper(str,ind+2,v);
        }
        v[ind] = way1;
        return way1;
    }
    
    
    int numDecodings(string s) {
       
        vector<int>v(s.length(),-1);
        int ans = helper(s,0,v);
        return ans;
    }
};