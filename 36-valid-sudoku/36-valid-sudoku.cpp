class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string>set;
        
        for(int i = 0; i<9;i++)
        {
           
           for(int j = 0;j<9;j++)
           {
               if(board[i][j] != '.')
               {
                     string r= "row"+to_string(i)+to_string(board[i][j]);
                    string c= "col"+to_string(j)+to_string(board[i][j]);
                    int b = (i/3) * 3 + (j/3);
                    string box= "box"+ to_string(b) + to_string(board[i][j]);
                   
                   if(set.find(r) != set.end() || set.find(c)!=set.end() || set.find(box)!=set.end())
                   {
                       return false;    
                   }

                   
                   
                   else
                   {
                       set.insert(r);
                       set.insert(c);
                       set.insert(box);
                   }
               }
           }
            
           
        }
        return true;
    }
};