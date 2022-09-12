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
       vector<int> prev= v[0];

		for(vector<int> i:v) {
			if(prev[1]>i[0]) {
				ans++;                //we dont update previous, because i[1] will be grater 
			}else prev=i;           // we want the end point to be minimum
		}
		return ans;     
    
    }
};