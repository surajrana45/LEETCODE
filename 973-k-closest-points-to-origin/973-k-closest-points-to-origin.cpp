class Solution {
public:
    
    
    static bool cmp(vector<int>a,vector<int>b)
    {
       long long int x = a[0]*a[0] + a[1]*a[1];
        
       long long int y = b[1]*b[1]+b[0]*b[0];
        
        return x<y;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
       
       sort(p.begin(),p.end(),cmp);
        
        int i=p.size();
        
        while(i>k)
        {
            p.pop_back();
            i--;
            
        }
        return p;
    }
};