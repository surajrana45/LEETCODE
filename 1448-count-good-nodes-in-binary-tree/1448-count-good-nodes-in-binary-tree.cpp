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
    
    void helper(TreeNode*root,TreeNode*check,int *ans)
    {
        if(root == NULL)
            return;
        
        if(root->val>=check->val){
            *(ans) = *(ans)+1;
            check=root;
        }
       
        helper(root->left,check,ans);
        helper(root->right,check,ans);
    }
    
    
    int goodNodes(TreeNode* root) {
       
        if(root == NULL)
            return 0;
        if(!root->left && !root->right)
            return 1;
        
        int ans = 0;
        
         helper(root->left,root,&ans);
         helper(root->right,root,&ans);
        return ans+1;
    }
};