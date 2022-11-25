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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode*head1=NULL;
        ListNode*temp=NULL;
        
        int sum=0;
        head=head->next;
        while(head!=NULL)
        {
           if(head->val!=0)
           {
               sum+=head->val;
               
           }
            else{
                if(head1==NULL)
                {
                    head1=new ListNode(sum);
                    temp=head1;
                }
                else{
                    temp->next=new ListNode(sum);
                    temp=temp->next;
                }
                sum=0;
            }
            head=head->next;
        }
        return head1;
    }
};