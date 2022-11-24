class Solution {
public:
    
    int fib_helper(int n)   
    {
        if(n<=1)
            return n;
        
        int *ans = new int[n+1];
        ans[0] = 0;
        ans[1] = 1;
        
        for(int i=2;i<=n;i++)
        {
            ans[i] = ans[i-1]+ans[i-2];
        }
        
        return ans[n];
    }
    
    int fib(int n) {
        
        return fib_helper(n);
    }
};