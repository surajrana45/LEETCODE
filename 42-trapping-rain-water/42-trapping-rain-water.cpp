class Solution {
public:
    int trap(vector<int>& height) {
        
        vector<int>left(height.size());
        vector<int>right(height.size());
        
        for(int i=0;i<height.size();i++)
        {
            int lans;
            if(i == 0)
            {
                left[i] = height[i];
            }
            else
            {
                lans = max(height[i],left[i-1]);
                left[i] = lans;
            }
        }
        for(int i=height.size()-1;i>=0;i--)
        {
            int rans;
            if(i == height.size()-1)
            {
                right[i] = height[i];
            }
            else
            {
                rans = max(height[i],right[i+1]);
                right[i] = rans;
            }
        }
        int ans = 0;
        for(int i=0;i<left.size();i++)
        {
            ans += min(left[i],right[i]) - height[i];
        }
        return ans;
       
    }
};