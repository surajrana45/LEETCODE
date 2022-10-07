class Solution {
public:
    bool equalFrequency(string word) {
        
        int arr[26]={0};
        for(int i=0;i<word.length();i++)
        {
            arr[word[i]-'a']+=1;
        }
        int mini = INT_MAX;
        int maxi= INT_MIN; 
        int ind1 = 0;
        int ind2 = 0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0 && arr[i]>maxi)
            {
                maxi = arr[i];
                ind1 = i;
            }
            if(arr[i]!=0 && arr[i]<mini)
            {
                mini = arr[i];
                ind2 = i;
            }
        }
        if(mini==maxi)
            mini--;
        arr[ind1]-=1;
        bool ans1=true;
        bool ans2=true;
        
         for(int i=0;i<26;i++)
        {
            if(arr[i]!=0 && arr[i]!=mini){
                ans1 = false;
                break;
            }
                
        }
        arr[ind1]+=1;
        arr[ind2]-=1;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0 && arr[i]!=maxi){
                ans2 = false;
                break;
            }
        }
        return ans1||ans2;
    }
};