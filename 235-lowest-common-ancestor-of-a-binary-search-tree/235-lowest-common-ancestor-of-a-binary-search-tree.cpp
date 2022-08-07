/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL)
            return root;
        
        if(root->val == p->val || root->val == q->val)
            return root;
        
        TreeNode*lans = lowestCommonAncestor(root->left,p,q);
        TreeNode*rans = lowestCommonAncestor(root->right,p,q);
        
        if(lans!=NULL && rans!=NULL)
            return root;
        
        if(lans == NULL)
            return rans;
        else
            return lans;
    }
};