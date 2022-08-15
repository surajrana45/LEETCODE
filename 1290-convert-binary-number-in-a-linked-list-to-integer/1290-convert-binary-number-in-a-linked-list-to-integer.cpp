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
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        
        ListNode*temp = head;
        
        vector<int>ans;
        while(temp)
        {
            int val = temp->val;
            temp = temp->next;
            
           ans.push_back(val);
        }
        
        int sol = 0;
        int j=0;
        for(int i=ans.size()-1;i>=0;i--)
        {
            sol = sol+ans[i]*pow(2,j);
            j++;
        }
        return sol;
    }
    
};