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
    
    void helper(TreeNode*root, int& sum)
    {
        if(root==NULL)
            return;
        
        if(root!=NULL)
            sum++;
        
        helper(root->left,sum);
        helper(root->right,sum);
    }
    
    
    
    int countNodes(TreeNode* root) {
        int sum=0;
       // helper(root,sum);
        if(root==NULL)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*temp = q.front();
            q.pop();
            sum++;
            
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            
        }
        
        return sum;
    }
};