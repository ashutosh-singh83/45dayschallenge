class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long N=1000000007;
        long long num1=0;
        long long num2=0;
        while(l1||l2){
            if(l1){
                num1=(num1*10)%N+l1->val;
                l1=l1->next;
            }
            if(l2){
                num2=(num2*10)%N+l2->val;
                l2=l2->next;
            }

        }
        long long sum=((num1%N)+(num2%N))%N;
        ListNode*head=new ListNode(sum%10);
        sum/=10;
        while(sum){
            ListNode*curr=new ListNode(sum%10);
            curr->next=head;
            head=curr;
            sum/=10;
        }
        return head;
    }
};