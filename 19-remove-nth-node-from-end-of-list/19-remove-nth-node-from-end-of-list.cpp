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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL)
            return NULL;
        
        if(n == 1 && head->next == NULL)
        {
            head = head->next;
            return head;
        }
        int cnt = 0;
        
        ListNode*temp = head;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        int limit = cnt-n;
        temp = head;
        
        if(limit == 0)
            head = head->next;
        else{
        cnt = 1;
        while(cnt<limit)
        {
            cnt++;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        }
        return head;
    }
};