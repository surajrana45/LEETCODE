class Solution {
public:
    int maxArea(vector<int>& height) {
     
        int i = 0;
        int j = height.size()-1;
        
        int maxi = INT_MIN; 
        while(i<j)
        {
            int mini = min(height[i],height[j]);
            int temp = mini*(j-i);
            
            maxi = max(maxi,temp);
            
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return maxi;
        
    }
};