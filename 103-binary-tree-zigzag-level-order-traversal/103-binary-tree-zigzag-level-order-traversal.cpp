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
    void helper(TreeNode*root,vector<vector<int>>&ans)
    {
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>temp;
        int c=0;
        int ch = 0;
        while(!q.empty())
        {
            TreeNode*Front = q.front();
            q.pop();
            
            if(Front == NULL)
            {
                
                ch++;
                if(ch == 2)
                {
                    break;
                }
                if(c%2 == 0)
                    reverse(temp.begin(),temp.end());
                
                ans.push_back(temp);
                temp.clear();
                c++; 
                q.push(NULL);
            }
            else{
            temp.push_back(Front->val);
            ch = 0;
            if(Front->right)
                q.push(Front->right);
            if(Front->left)
                q.push(Front->left);
            }
        }
    }
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<vector<int>>ans;
        helper(root,ans);
        return ans;
    }
};