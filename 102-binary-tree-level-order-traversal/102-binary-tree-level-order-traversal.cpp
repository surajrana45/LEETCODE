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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(root == NULL)
            return {};
        
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        vector<int>temp;
        
        q.push(root);
        q.push(NULL);
      //  ans.push_back({root->val});
        int k=0;
        while(!q.empty())
        {
            TreeNode*f = q.front();
            q.pop();
            
            if(f == NULL)
            {
                k++;
                if(k==2)
                    break;
              ans.push_back(temp);
              temp.clear();
              q.push(NULL);
              continue;  
                
            }
            k=0;
            temp.push_back(f->val);
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
        
        return ans;
    }
};