class Solution {
public:
    string addStrings(string nums1, string nums2) {
        
        string result="";
        int sum = 0;
        int i = nums1.size()-1;
        int j = nums2.size()-1;
        
        while(i>=0 && j>=0)
        {
            sum = sum+(nums1[i--] - '0' + nums2[j--]-'0');
            result.push_back(sum%10 + '0');
            sum = sum/10;
        }
         while(i>=0)
        {
            sum = sum+(nums1[i--] - '0');
            result.push_back(sum%10 + '0');
            sum = sum/10;
        }
         while(j>=0)
        {
            sum = sum+(nums2[j--]-'0');
            result.push_back(sum%10 + '0');
            sum = sum/10;
        }
        if(sum>0)
            result.push_back(sum%10 + '0');
        
        reverse(result.begin(),result.end());
        
        return result;
    }
    
};