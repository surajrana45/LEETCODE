class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxi = INT_MIN;
        
        int i =0;
        int j = height.size()-1;
        
        while(i<j)
        {
            int mini = min(height[i],height[j]);
            maxi = max(maxi,(j-i)*mini);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
                
        }
        return maxi;
    }
};