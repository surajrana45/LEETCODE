class Solution {
public:
    
    bool helper(int n,int x,int y)
    {
        if(n == pow(x,y))
            return true;
        
        if(n<pow(x,y))
            return false;
        
        return helper(n,x,y+1);
    }
    
    
    bool isPowerOfFour(int n) {
        
        return helper(n,4,0);
    }
};