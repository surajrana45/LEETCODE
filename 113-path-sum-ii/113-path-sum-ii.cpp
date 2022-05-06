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
     vector<int>v1;
    void pathsumHelp(TreeNode*root,int tsum,vector<vector<int>>&res,vector<int>v)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        tsum = tsum-v[v.size()-1];
        
        if(tsum==0 && !root->left && !root->right)
        {
            res.push_back(v);
            return;
        }
        
        pathsumHelp(root->left,tsum,res,v);
        pathsumHelp(root->right,tsum,res,v);
        
        v.pop_back();
    }
    
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    
        vector<int>v;
        vector<vector<int>>res;
        pathsumHelp(root,targetSum,res,v);
        return res;
        
    }
};