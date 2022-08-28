/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int l1 = 0;
        int l2 = 0;
        
        ListNode*temp1 = headA;
        ListNode*temp2 = headB;
        
        
        while(headA)
        {
            l1++;
            headA = headA->next;
        }
        
        while(headB)
        {
            l2++;
            headB = headB->next;
        }
        
        int skip = abs(l1-l2);
        
        if(l1>l2)
        {
            int i = 0;
            while(i<skip)
            {
                temp1 = temp1->next;
                i++;
            }
        }
        
        if(l1<l2)
        {
            int i = 0;
            while(i<skip)
            {
                temp2 = temp2->next;
                i++;
            }
        }
        while(temp1 && temp2)
        {
            if(temp1 == temp2)
                return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        return NULL;
    }
};