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
    int maxDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        
        int lans = 0;
        int rans = 0;
        
        if(root->left)
            lans = maxDepth(root->left);
        if(root->right)
            rans = maxDepth(root->right);
        
        return 1+max(lans,rans);
    }
};