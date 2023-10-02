int frequency(Node*head,int k){
    int f=0;
    Node*temp=head;
    while(temp){
        if(temp->data==k){
           f++; 
        }
        temp=temp->next;
        
    }
    return f;
    
}
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int f0=frequency(head,0);
        int f1=frequency(head,1);
        int f2=frequency(head,2);
        Node*dummyhead=new Node(0);
        Node*ptr1=dummyhead;
        while(f0--){
            Node*new_node=new Node(0);
            ptr1->next=new_node;
            ptr1=ptr1->next;
        }
        while(f1--){
            Node*new_node=new Node(1);
            ptr1->next=new_node;
            ptr1=ptr1->next;
        }
        while(f2--){
            Node*new_node=new Node(2);
            ptr1->next=new_node;
            ptr1=ptr1->next;
        }
        return dummyhead->next;
        
    }
};
