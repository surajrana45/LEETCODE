class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
      priority_queue<pair<int,pair<int,int>>>pq;
        
        for(int i=0;i<p.size();i++)
        {
            int a = p[i][0]*p[i][0] + p[i][1]*p[i][1];
            pq.push({a,{p[i][0],p[i][1]}});
            
            if(i>=k)
            {
                pq.pop();
            }
        }
        vector<vector<int>>ans;
        while(!pq.empty())
        {
           pair<int,int>top = pq.top().second;
           ans.push_back({top.first,top.second}); 
            pq.pop();
        }
        
        return ans;
        
    }
};