class Solution {
public:
    bool isHappy(int n) {
        
    
        unordered_map<int,int>mp;
        
        while(1)
        {
           if(mp.find(n)!=mp.end())
           {
               return false;
           }
            mp[n]++;
            int temp = 0;
            while(n)
            {
                int r = n%10;
                n = n/10;
                temp = temp+(r*r);
            }
            n = temp;
            if(n == 1)
                break;
            
        }
        return true;
    }
};