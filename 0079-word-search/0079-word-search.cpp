class Solution {
public:
    
    bool helper(vector<vector<char>>&arr,string word,int i,int j,int ind)
    {
        if(ind==word.length())
            return true;
        if(i<0 || j<0 || j>=arr[0].size()|| i>=arr.size())
            return false;
        
        if(word[ind]!=arr[i][j]) return false;
        char x=arr[i][j];
        arr[i][j]='-';
        
        bool ans1=helper(arr,word,i+1,j,ind+1);
        bool ans2=helper(arr,word,i,j+1,ind+1);
        bool ans3=helper(arr,word,i,j-1,ind+1);
        bool ans4=helper(arr,word,i-1,j,ind+1);
        arr[i][j]=x;
        
        return (ans1||ans2||ans3||ans4);
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int m=board.size();
        int n=board[0].size();
        if(word.size()>m*n) return false;
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]==word[0]){
                   bool ans = helper(board,word,i,j,0);
                   if(ans==true) return true;
                }
            }
        }
        return false;
    }
};