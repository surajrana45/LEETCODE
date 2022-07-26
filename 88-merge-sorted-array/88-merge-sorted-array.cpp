class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int>temp(n+m);
        int i = 0;
        int j = 0;
        int k = 0;
        
        while(i<m && j<n)
        {
            if(nums1[i] <= nums2[j])
            {
                temp[k] = nums1[i];
                i++;
                k++;
            }
            else
            {
                temp[k++] = nums2[j++];
            }
        }
        while(i<m)
        {
            temp[k++] = nums1[i++];
        }
        while(j<n)
         {
             temp[k++] = nums2[j++];
         }
          k=0 ;   
         for(int i =0 ;i<nums1.size();i++)
              {
                  nums1[i] = temp[k++];
              }
                  
    }
};