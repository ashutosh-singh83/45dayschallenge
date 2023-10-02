class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        //slow is poinying to middle node
        ListNode*curr=slow;
        ListNode*prev=NULL;
        while(curr){
            ListNode*nextPtr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextPtr;
        }
        //prev is pointing to last node
        ListNode*ptr1=head;
        ListNode*ptr2=prev;
        while(ptr2!=NULL){
            if(ptr1->val!=ptr2->val){
                return false;
            }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        return true;
    }
};