class Solution {
public:
    int getDecimalValue(ListNode* head) {
        vector<int> v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int k=n-1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i]*pow(2,k);
            k--;
        }
        return sum;
    }
};