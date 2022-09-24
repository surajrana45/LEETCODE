class Solution {
public:
    int findTheWinner(int n, int k) {
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i] = i+1;
        }
        
        int j = 0;
        int i = 0;
        int c = 0;
        while(c!=n-1)
        {
           if(arr[i]!=-1)
           {
               j++;
               if(j == k)
               {
                   arr[i] = -1;
                   j = 0;
                   c++;
               }
               
           }
            
            i = (i+1)%n;
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                ans = arr[i];
                break;
            }
        }
        return ans;
    }
};