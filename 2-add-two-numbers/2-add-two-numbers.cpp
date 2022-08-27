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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        int carry = 0;
        ListNode*head = NULL;
        ListNode*tail = NULL;
       while(l1 && l2)
       {
           int sum = l1->val+l2->val+carry;
           int x = sum%10;
           ListNode*temp = new ListNode(x);
           carry = sum/10;
           if(head == NULL)
           {
               head = temp;
               tail = temp;
           }
           else
           {
               tail->next =temp;
               tail = temp;
           }
           l1 = l1->next;
           l2 = l2->next;
       }
        while(l1)
        {
           int sum = l1->val+carry;
           int x = sum%10; 
           ListNode*temp = new ListNode(x);
           carry = sum/10;
            
           tail->next =temp;
            tail = temp;
            l1 = l1->next;
        }
        while(l2)
        {
           int sum = l2->val+carry;
           int x = sum%10; 
           ListNode*temp = new ListNode(x);
           carry = sum/10;
            
           tail->next =temp;
            tail = temp;
            l2 = l2->next;
        }
        if(carry == 1)
        {
            ListNode*temp = new ListNode(carry);
            tail->next=temp;
            tail = temp;
        }
        
       
        return head;
    }
};





