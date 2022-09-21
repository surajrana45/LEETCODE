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
    
   void helper(TreeNode*root,TreeNode*&temp,int low,int high)
    {
        if(root == NULL)
            return ;
        
        TreeNode*dummy = new TreeNode(root->val);
        
        if(root->val>=low && root->val<=high)
        {
            temp = dummy;
            helper(root->left,temp->left,low,high);
            helper(root->right,temp->right,low,high);
        }
        else
        {
            helper(root->left,temp,low,high);
            helper(root->right,temp,low,high);
        }
        
    }
    
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        TreeNode*temp = NULL;
        TreeNode*tail = NULL;
        
        helper(root,temp,low,high);
        return temp;
    
        
    }
};