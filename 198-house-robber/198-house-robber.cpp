class Solution {
public:
    
//     int helper(vector<int>v,int n ,int*arr)
//     {
      // if(n<0)
      //     return 0;
      // if(n==0)
      //     return v[n];
//       if(n == 1)
//           return max(v[n],v[n-1]);
        
//         if(arr[n] != -1)
//             return arr[n];
        
//        arr[n] =  max(helper(v,n-1,arr),v[n]+helper(v,n-2,arr)); 
//         return arr[n];   
        
//     }
    
    int rob(vector<int>& nums) {
        
       int n = nums.size()-1 ;
       int*arr = new int[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            arr[i] = -1;
        }
        
       if(n<0)
          return 0;
       if(n==0)
          return nums[n];
        
        arr[0] = nums[0];
        arr[1] = max(nums[0],nums[1]);
        int i;
        for(i=2;i<nums.size();i++)
        {
            arr[i] = max(arr[i-1],nums[i]+arr[i-2]);
        }
        return arr[i-1]; 
        
      // int ans = helper(nums,nums.size()-1,arr);
      //   return ans;
        
    }
    
};