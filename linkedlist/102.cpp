class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(curr){
            ListNode*nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
        }
        return prev;
    }
};