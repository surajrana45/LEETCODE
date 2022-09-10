class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        int ans;
        
        int mid = (i+j)/2;
        while(1)
        {
         if(arr[mid]>arr[0] && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1] &&                              arr[mid]>arr[arr.size()-1])
            {
                ans = mid;
                break;
            }
            else if(arr[mid]<arr[mid+1])
                mid = mid+1;
            else
                mid = mid-1;
                
        }
        return ans;
    }
};