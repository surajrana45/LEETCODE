class Solution {
public:
    
   static bool compare(pair<int,int>a,pair<int,int>b)
    {
        return a.second>b.second;
    }
    
    int minSetSize(vector<int>& arr) {
        //sort(arr.begin(),arr.end());
        map<int,int>mp;
        
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        
        vector<pair<int,int>>v;
        for(auto it:mp)
        {
            v.push_back(it);
        }
        
        sort(v.begin(),v.end(),compare);
        
        int sum = 0;
        int cnt = 1;
        int ans;
        for(auto it:v)
        {
            sum+=it.second;
            if(sum>=arr.size()/2)
            {
                ans = cnt;
                break;
            }
            cnt++;
        }
        return ans;
    }
};