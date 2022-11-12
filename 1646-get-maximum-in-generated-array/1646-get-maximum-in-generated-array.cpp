class Solution {
public:
    int getMaximumGenerated(int n) {
      
        if(n == 0)
            return 0;
        
        vector<int>v(n+1);
        v[0] = 0;
        v[1] = 1;
        int i=2;
        while(i<=n)
        {
            if(i%2==0)
            {
                int rem = i/2;
                v[i] = v[rem];
            }
            else{
                int rem=i/2;
                v[i] = v[rem]+v[rem+1];
            }
            i++;
           
        }
        int maxi=0;
        for(int j=0;j<=n;j++)
        {
            maxi = max(maxi,v[j]);
        }
        return maxi;
        
    }
};