class Solution {
public:
    
   static bool cmp(pair<int,int>&a , pair<int,int>&b)
    {
        return a.second>b.second;
    }
    
    vector<int> sortmap(map<int,int>&m,int k)
    {
        vector<pair<int,int>>v;
        
        for(auto it:m)
        {
            v.push_back(it);
        }
        
        sort(v.begin(),v.end(),cmp);
        int i=0;
        vector<int>v1;
        for(auto it:v)
        {
            v1.push_back(it.first);
            i++;
            if(i==k)
                break;
        }
        
        return v1;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        
        
        vector<int>v = sortmap(m,k);
     return v;      
    }
};