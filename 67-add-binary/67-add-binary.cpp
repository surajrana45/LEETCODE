class Solution {
public:
    string addBinary(string a, string b) {
        
        int carry = 0;
        
        string ans="";
        
        int i = a.length()-1;
        int j = b.length()-1;
        while(i>=0 && j>=0)
        {
            int temp = (a[i]-'0') + (b[j]-'0')+carry;
            int x = temp%2;
            ans.push_back(x+'0');
            carry = temp/2;
            i--;
            j--;
        }
        cout<<ans;
        while(i>=0)
        {
            int temp = (a[i]-'0')+carry;
            int x = temp%2;
            ans.push_back(x+'0');
            carry = temp/2;
            i--;
        }
         while(j>=0)
        {
            int temp = (b[j]-'0')+carry;
            int x = temp%2;
            ans.push_back(x+'0');
            carry = temp/2;
            j--;
        }
        if(carry == 1)
        {
            ans.push_back(carry+'0');
            carry = 0;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};