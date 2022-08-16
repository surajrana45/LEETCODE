class Solution {
public:
    int climbStairs(int n) {
        
        int *arr = new int[n+1];
        arr[0] = 0;
        arr[1] = 1;

        for(int i=2;i<=n;i++)
        {
            if(i == 2)
            {
                arr[i] = 1+arr[i-1];
            }
           else{ 
           arr[i] = arr[i-1]+arr[i-2];
           }
        }
        return arr[n];
    }
};