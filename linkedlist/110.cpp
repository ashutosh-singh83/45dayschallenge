class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*temp=head;
        int k=left-2;
        while(k){
            temp=temp->next;
            k--;
        }
        //s is pointing to left-1 position
        ListNode*prev=head;
        int c=right;
        while(c){
            prev=prev->next;
            c--;
        }
        //prev is pointing to pos right+1
        ListNode*curr=temp->next;
        int count=right-left+1;
        while(count){
            ListNode*nextPtr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextPtr;
            count--;
        }
        temp->next=prev;
        return head;

    }
};