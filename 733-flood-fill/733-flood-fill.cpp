class Solution {
public:
    
    void fill(vector<vector<int>>&arr,int i,int j,int val,int color)
    {
        if(i<0 || i>=arr.size() || j<0 || j>=arr[0].size() || arr[i][j] == color || arr[i][j] != val)
            return;
        
        arr[i][j] = color;
        
        fill(arr,i,j+1,val,color);
        fill(arr,i,j-1,val,color);
        fill(arr,i+1,j,val,color);
        fill(arr,i-1,j,val,color);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        for(int i= 0;i<image.size();i++)
        {
            for(int j =0;j<image[0].size();j++)
            {
                int val = image[sr][sc];
                
                fill(image,sr,sc,val,color);
            }
        }
        return image;
    }
};