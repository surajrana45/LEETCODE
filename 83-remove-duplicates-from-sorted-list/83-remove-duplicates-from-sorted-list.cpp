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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode*temp = head;
        
        while(temp->next)
        {
            if(temp->next->val == temp->val)
            {
                ListNode*a = temp->next;
                temp->next = a->next;
                delete(a);
                continue;
            }
            temp = temp->next;
        }
        return head;
    }
};