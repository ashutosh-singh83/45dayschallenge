ListNode*moveBykSteps(ListNode*&head,int k){
    ListNode*ptr=head;
    while(k){
        ptr=ptr->next;
        k--;
    }
    return ptr;
}
int findLength(ListNode*&head){
    ListNode*temp=head;
    int length=0;
    while(temp){
        length++;
        temp=temp->next;
    }
    return length;
}
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*ptr1=headA;
        ListNode*ptr2=headB;
        int n=findLength(headA);
        int m=findLength(headB);
        
        if(n>m){
            int dif=n-m;
            ptr1=moveBykSteps(headA,dif);

        }else{
            int dif=m-n;
           ptr2=moveBykSteps(headB,dif);
 
        }
        while(ptr1!=ptr2){
            ptr1=ptr1->next;
            ptr2=ptr2->next;

        }
        return ptr1;
    }
};