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
    
    void levelFromBottom(TreeNode*root,vector<vector<int>>&v)
    {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>v1;
        while(!q.empty())
        {
            TreeNode*F = q.front();
            q.pop();
          
            
            if(F != NULL){
            v1.push_back(F->val);
            }
            else{
                if(v1.size()!=0){
                v.push_back(v1);
                v1.clear();
                q.push(NULL);
                continue;
                }
                else
                    break;
            }
            if(F->left)
            {
                q.push(F->left);
            }
            if(F->right)
            {
                q.push(F->right);
            }
           
                      
        }
    }
    
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>v;
        
        levelFromBottom(root,v);
        reverse(v.begin(),v.end());
        return v;
    }
};