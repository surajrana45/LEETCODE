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
    
    void helper(TreeNode*root,vector<int>&v)
    {
        if(root)
        {
            if(root->left)
                helper(root->left,v);
            
            if(root->right)
                helper(root->right,v);
            
            v.push_back(root->val);
        }
        return;
    }
    
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        
        helper(root,v);
        
        return v;
    }
};