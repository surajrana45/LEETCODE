class Solution {
public:    
    int climbStairs(int n) {
       // return helper(n,0);
        vector<int>v(n+1);
        v[0] = 1;
        v[1] = 1;
        if(n == 0)
            return v[0];
        if(n == 1)
            return v[1];
        for(int i=2;i<=n;i++)
        {
            v[i] = v[i-1]+v[i-2];
        }
        return v[n];
    }
};