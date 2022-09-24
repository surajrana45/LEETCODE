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
    
    void helper(TreeNode*root,int target,vector<vector<int>>&ans,vector<int>temp)
    {
        // if(target<0)
        //     return;
        
       if(root == NULL)
           return;
        
        if(target-root->val == 0 && root->left == NULL && root->right ==NULL)
        {
            temp.push_back(root->val);
            ans.push_back(temp);
            return;
        }
        temp.push_back(root->val);
        helper(root->left,target-root->val,ans,temp);
        
        helper(root->right,target-root->val,ans,temp);
        temp.pop_back();
       
        
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        
        helper(root,target,ans,temp);
        return ans;
    }
};