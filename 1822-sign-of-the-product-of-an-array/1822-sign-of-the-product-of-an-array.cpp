class Solution {
public:
   
    
    
    int arraySign(vector<int>& nums) {
        
        int n =0;
        int p = 0;
        for(auto v:nums)
        {
            if(v<0)
                n++;
           if(v == 0)
               return 0;
        }
        if( n%2 ==0)
            return 1;
        else 
            return -1;
        
    }
};