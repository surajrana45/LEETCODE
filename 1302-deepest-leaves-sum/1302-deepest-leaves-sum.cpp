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
    int sum = 0;
    
    int heigh(TreeNode*root)
    {
        if(root==NULL)
            return 0;
        
        return max(heigh(root->left),heigh(root->right))+1;
    }
    
    void lsum(TreeNode*root,int h)
    {
        if(root==NULL)
            return;
        
        if(h==1)
        {
            sum = sum+root->val;
        }
        lsum(root->left,h-1);
        lsum(root->right,h-1);
    }
    
     void rsum(TreeNode*root,int h)
    {
        if(root==NULL)
            return;
        
        if(h==1)
        {
            sum = sum+root->val;
        }
        rsum(root->left,h-1);
        rsum(root->right,h-1);
    }
    
    
    
    int deepestLeavesSum(TreeNode* root) {
        
        int height = heigh(root);
        lsum(root,height);
        rsum(root,height);
        
        return sum/2;
    }
};