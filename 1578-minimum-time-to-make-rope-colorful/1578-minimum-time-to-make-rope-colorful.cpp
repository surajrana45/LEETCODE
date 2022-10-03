class Solution {
public:
    
//     void helper(string str,vector<int>&time,int ind,int& ans)
//     {
//         if(ind == str.length()-1 || ind == str.length())
//             return;
        
//         if(str[ind] == str[ind+1])
//             ans += min(time[ind],time[ind+1]);
            
//         helper(str,time,ind+1,ans);    
        
//     }
    
    int minCost(string colors, vector<int>& time) {
        
        int p1 = 0;
        int p2 = 1;
        int mint = 0;
        
        while(p1<colors.length() && p2<colors.length())
        {
            if(colors[p1] == colors[p2])
            {
                if(time[p1]<=time[p2])
                {
                    mint += time[p1];
                    p1 = p2;
                    p2++;
                }
                else
                {
                    mint += time[p2];
                    p2++;
                }
            }
            else
            {
                p1 = p2;
                p2++;
            }
        }
        return mint;
    }
};