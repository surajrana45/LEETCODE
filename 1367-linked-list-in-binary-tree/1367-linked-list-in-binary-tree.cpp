/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    
    bool isPath(TreeNode*root,ListNode*head)
    {
        if(head == NULL)
            return true;
        if(root == NULL || root->val != head->val)
            return false;
        
        return isPath(root->left,head->next)||isPath(root->right,head->next);
    }
    
    
    
    bool helper(TreeNode*root,ListNode*head){
     
        if(head == NULL)
            return true;
        
        if(root == NULL)
           return false;
        
 
        if(isPath(root,head))
            return true;
        
        return helper(root->left,head)||helper(root->right,head);
        
        
       
    }
    
    
    bool isSubPath(ListNode* head, TreeNode* root) {
        
        
        return helper(root,head);
    }
};