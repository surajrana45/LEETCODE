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
#include<queue>
class Solution {
public:
    
    void helper(TreeNode*root,vector<int>&ans,int k)
    {
        if(root==NULL)
            return;
        queue<TreeNode*>rightView;
        rightView.push(root);
        while(!rightView.empty())
        {
            TreeNode*Front = rightView.front();
            ans.push_back(Front->val);
           // rightView.pop();
            
            for(int i=rightView.size();i>0;i--)
            {
                Front = rightView.front();
                rightView.pop();
                if(Front->right)
                    rightView.push(Front->right);
                if(Front->left)
                    rightView.push(Front->left);
            }
        }
    }
    
        
    
    
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return{};
        vector<int>ans;
       helper(root,ans,1);
       return ans;
    }
};