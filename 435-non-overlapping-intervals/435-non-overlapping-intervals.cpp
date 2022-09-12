class Solution {
public:
    
    static bool cmp(vector<int>&v1,vector<int>&v2)
    {
        return v1[1]<v2[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        
        sort(v.begin(),v.end(),cmp);
        
       int ans = -1;
        if(v.size()==0) return 0; 
       int mini = v[0][1];

		for(vector<int> i:v) {
			if(mini>i[0]) {
				ans++;                
			}else mini=i[1];        
		}
		return ans;     
    
    }
};