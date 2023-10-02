class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*dummy=new ListNode(-1);
        ListNode*ptr1=dummy;
        ListNode*temp=head;
        while(temp){
            if(temp->val<x){
                ListNode*curr=new ListNode(temp->val);
                ptr1->next=curr;
                ptr1=ptr1->next;
            }
            temp=temp->next;
        }
        ListNode*t=head;
        while(t){
            if(t->val>=x){
                ListNode*curr=new ListNode(t->val);
                ptr1->next=curr;
                ptr1=ptr1->next;
            }
            t=t->next;
        }
        return dummy->next;

    }
};