class Solution {
public:
    int numSplits(string s) {
        
        int n=s.length();
        vector<int>pre(n,0);
        vector<int>suf(n,0);
        
        int count=0;
        vector<int>freq(26,0);
        
        for(int i=0;i<n;i++)
        {
            char ch=s.at(i)-'a';
            freq[ch]++;
            if(freq[ch]==1)
            {
                count++;
            }
            pre[i]=count;
        }
        vector<int>freq1(26,0);
        count=0;
        for(int i=n-1;i>=0;i--)
        {
            int ch=s.at(i)-'a';
            freq1[ch]++;
            if(freq1[ch]==1)
            {
                count++;
            }
            suf[i]=count;
        }
        int split=0;
        for(int i=0;i<n-1;i++)
        {
            if(pre[i]==suf[i+1])
                split++;
        }
        return split;
    }
};