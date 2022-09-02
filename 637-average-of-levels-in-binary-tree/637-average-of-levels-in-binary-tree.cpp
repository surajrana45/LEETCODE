/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void helper(TreeNode*root,vector<double>&ans,double sum)
    {
       queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        int avg = 0;
        int cnt = 0;
        while(!q.empty())
        {
            TreeNode*Front = q.front();
            q.pop();
            
            if(Front == NULL)
            {
                 cnt++;
                if(cnt>1)
                    break;
                ans.push_back(sum/avg);
                sum=0;
                q.push(NULL);
                avg = 0;
               
                
            }
            else{
            avg++;
            cnt = 0;
            sum = sum+Front->val;
            if(Front->left)
                q.push(Front->left);
            if(Front->right)
                q.push(Front->right);
            }
            
        }
    }
    
    
    vector<double> averageOfLevels(TreeNode* root) {
        
       
        vector<double>ans;
        //ans.push_back(root->val);
        double sum = 0;
        helper(root,ans,sum);
        
        return ans;
    }
};