class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
       
       
        
        int i=v.size()-1;
        int j=v.size()-2;
        
        while(v.size()>1)
        {
            sort(v.begin(),v.end());
            if(v[i]!=v[j])
            {
                v[j] = abs(v[i]-v[j]);
                j--;
                i--;
                v.pop_back();
            }
            else
            {
                v.pop_back();
                v.pop_back();
                i=i-2;
                j=j-2;
               
            }
        }
        if(v.size()==1)
          return v[0];
        return 0;
        
    }
};