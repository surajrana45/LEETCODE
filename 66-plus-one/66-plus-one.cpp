class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        
        int carry = 1;
        int i = v.size()-1;
        while(i>=0 && carry == 1)
        {
            if(v[i] == 9)
            {
                v[i] = 0;
                carry = 1;
            }
            else
            {
                v[i] = v[i]+carry;
                carry = v[i]/10;
            }
            i--;
        }
        if(carry == 1){
            v[0] = 1;
            v.push_back(0);
        }
        return v;
    }
};