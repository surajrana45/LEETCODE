class Solution {
public:
    int firstUniqChar(string s) {
        
        int arr[256] = {0};
        int n = s.length();
        
        for(int i=0;i<n;i++)
        {
            arr[s[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[s[i]] == 1)
            {
                return i;
            }
                
        }
        
        return -1;
    }
};