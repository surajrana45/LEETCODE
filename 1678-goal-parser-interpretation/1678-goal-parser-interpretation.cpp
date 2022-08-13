class Solution {
public:
    string interpret(string c) {
       
        string str;
        
        for(int i=0;i<c.length();i++)
        {
            if(c[i] == '(' && c[i+1] == ')' && i!=c.length()-1)
                str +=string()+'o';
            
            else if(c[i] == '(' || c[i] ==')')
            {
                continue;
            }
            else
            {
                str +=string()+c[i];
            }
        }
        return str;
    }
};