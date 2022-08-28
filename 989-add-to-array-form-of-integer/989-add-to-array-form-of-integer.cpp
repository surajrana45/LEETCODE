class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        vector<int>ans;
        
        int carry = 0;
        int i = num.size()-1;
        while(i>=0 && k!=0)
        {
            
            int rem = k%10;
            int sum = num[i]+rem+carry;
            int x = sum%10;
            ans.push_back(x);
            
            k = k/10;
            carry = sum/10;
            i--;
        }
        
        while(i>=0)
        {
            int sum = num[i]+carry;
            int x = sum%10;
            ans.push_back(x);
            carry = sum/10;
            i--;
        }
        
        while(k!=0)
        {
            int rem = k%10;
            int sum = rem+carry;
            int x = sum%10;
            ans.push_back(x);
            
            carry = sum/10;
            k = k/10;
        }
        
        
        if(carry > 0)
        {
            ans.push_back(carry);
            carry = 0;
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
       
    }
};