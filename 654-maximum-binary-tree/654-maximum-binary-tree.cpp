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
    
    TreeNode* constructHelper(vector<int>v,int l,int r)
    {
        if(l>r)
            return NULL;
        
        int max = INT_MIN;
        int ind;
        for(int i = l;i <= r;i++)
        {
            if(v[i]>max)
            {
                max = v[i];
                ind = i;
            }
        }
        TreeNode*head = new TreeNode(max);
        head->left = constructHelper(v,l,ind-1);
        head->right = constructHelper(v,ind+1,r);
        
        return head;
        
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return constructHelper(nums,0,nums.size()-1);
    }
};