class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.length();
        int m = magazine.length();
        
        int arr[256] = {0};
        for(int i=0;i<n;i++)
        {
            arr[ransomNote[i]]++;
        }
        
        for(int i=0;i<m;i++)
        {
            arr[magazine[i]]--;
        }
        
        for(int i=0;i<256;i++)
        {
            if(arr[i]>0)
            {
                return false;
            }
        }
        
        return true;
    }
};