class Solution {
public:
    int fib_helper(int n)
    {
        if(n<=1)
            return n;
        if(n<=2)
            return 1;
        
        int*ans = new int[n+1];
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 1;
        
        for(int i=3;i<=n;i++)
        {
            ans[i] = ans[i-1]+ans[i-2]+ans[i-3];
        }
        return ans[n];
    }
    
    
    int tribonacci(int n) {
        
        return fib_helper(n);
    }
};