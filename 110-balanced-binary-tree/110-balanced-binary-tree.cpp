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
    
    int height(TreeNode*root)
    {
        if(root == NULL)
            return 0;
        
        return 1+max(height(root->left),height(root->right));
    }
    
    
    bool helper(TreeNode*root)
    {
        if(root == NULL)
            return true;
        int l=0,r=0;
         if(root->left){        
            l = height(root->left);
             }
        if(root->right)
        {
            r = height(root->right);
        }
        
        if(abs(l-r)>1)
            return false;
        
        return helper(root->left) && helper(root->right);
        
    }
    
    
    bool isBalanced(TreeNode* root) {
        
        return helper(root);
    }
};