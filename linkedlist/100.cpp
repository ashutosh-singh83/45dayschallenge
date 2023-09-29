class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*curr_node=head;
        while(curr_node){
          while(curr_node->next!=NULL && curr_node->val==curr_node->next->val){
            //delete curr->next
            ListNode*temp=curr_node->next;
            curr_node->next=curr_node->next->next;
            free(temp);
         }
        //this loop ends when curr_node and curr_node->next value are different or linked list   ends
        curr_node=curr_node->next;
     }
        return head;
    }
};