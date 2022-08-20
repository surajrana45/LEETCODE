class Solution {
public:
    
  
    
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        if(v.size()==1)
            return v;
        
        sort(v.begin(),v.end());
        vector<vector<int>>ans;
        int i=0;
         
        vector<int>temp;
        temp.push_back(v[0][0]);
        temp.push_back(v[0][1]);
        
       for(i=1;i<v.size();i++)
       { 
           if(temp[1]>=v[i][0])
           {
               temp[1] = max(temp[1],v[i][1]);
               
               
           }
           else
           {
               ans.push_back(temp);
               temp.clear();
               temp.push_back(v[i][0]);
               temp.push_back(v[i][1]);
               
           }
           
       }
        if(temp[1]>=v[i-1][0])
        {
            ans.push_back(temp);
        }
        return ans;
    }
};