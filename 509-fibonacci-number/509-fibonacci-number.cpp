class Solution {
public:
    
    int helper(int*arr,int n)
    {
        if(n<=1)
            return n;
        
        if(arr[n] != -1)
            return arr[n];
        
        int a = helper(arr,n-1);
        int b = helper(arr,n-2);
        
        arr[n] = a+b;
        return arr[n];
    }
    
    
    int fib(int n) {
        
        int *arr = new int[n+1];
        
        for(int i =0;i<=n;i++)
        {
            arr[i] = -1;
        }
        
        int ans = helper(arr,n);
        
        return ans;
    }
};