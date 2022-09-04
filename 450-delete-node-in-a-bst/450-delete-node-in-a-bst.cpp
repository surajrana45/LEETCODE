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
    
    void helper(TreeNode*&root,int key)
    {
        if(root == NULL)
            return;
        
        if(root->val == key && root->left == NULL && root->right == NULL){
            root = NULL;
            return;
        }
        
        
        if(root->val == key && root->right == NULL){
             root = root->left;
            return;
        }
        
         if(root->val == key && root->left == NULL){
             root = root->right;
             return;
         }
        
        
        if(root->val == key)
        {
            TreeNode*temp = NULL;
            if(root->right->left)
            {
                temp = root->right;
                while(temp->left->left)
                {
                    temp = temp->left;
                }
                root->val = temp->left->val;
                temp->left = temp->left->right;
            }
            else
            {
                root->val = root->right->val;
                root->right = root->right->right;
                //root->right = NULL;
            }
        }
        helper(root->left,key);
        helper(root->right,key);
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        helper(root,key);
        return root;
    }
};