class Solution {
public:
    
    string getS(int d)
    {
        if(d == 2)
            return "abc";
        if(d == 3)
            return "def";
        if(d == 4)
            return "ghi";
        if(d == 5)
            return "jkl";
        if(d == 6)
            return "mno";
        if(d == 7)
            return "pqrs";
        if(d == 8)
            return "tuv";
        if(d == 9)
            return "wxyz";
        return " ";
    }
    
    
    void helper(vector<string>&ans,int n,string res)
    {
        if(n == 0)
        {
            ans.push_back(res);
            return;
        }
        int r = n%10;
        n = n/10;
        //helper(ans,n);
        string str = getS(r);
        
        for(int i=0;i<str.size();i++)
        {
            helper(ans,n,str[i]+res);
        }
        
        // int l = ans.size();
        // for(int i=0;i<str.length()-1;i++)
        // {
        //     for(int j=0;j<l;j++)
        //         ans.push_back(ans[j]);
        // }
        // int k =0 ;
        // for(int i = 0;i<str.length();i++)
        // {
        //     for(int j=0;j<l;j++)
        //     {
        //         ans[k].push_back(str[i]);
        //         k++;
        //     }
        // }
    }
    
    
    vector<string> letterCombinations(string digits) {
        if(digits == "")
            return {};
        int n = stoi(digits);
      
        vector<string>ans;
        helper(ans,n,"");
        return ans;
    }
};