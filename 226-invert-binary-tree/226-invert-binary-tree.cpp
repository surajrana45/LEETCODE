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
    
    void helper(TreeNode*&root)
    {
        
         if(root == NULL)
            return ;
        
         if(root->left && root->right)
       {
           TreeNode*temp = root->left;
           root->left = root->right;
           root->right = temp;
       }
        
       else if(root->left)
       {
           root->right = root->left;
           root->left = NULL;
       }
       else
       {
           root->left = root->right;
           root->right = NULL;
       }
        helper(root->right);
        helper(root->left);
       
    }
    
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL)
            return root;
        
        helper(root);
        
        return root;
        
        
    }
};