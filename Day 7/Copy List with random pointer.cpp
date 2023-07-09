class Solution {
public:
Node *copyRandomList(Node *head) {
    
    Node* cur=NULL;
    Node* nhead=NULL;
    if(!head)
        return NULL;
    cur=new Node(head->val);
    nhead=cur;
    while(head){
        if(head->next)
            cur->next=new Node(head->next->val);
        if(head->random){    
            if(head->random==head->next)
                cur->random=cur->next;
            else
                cur->random=new Node(head->random->val);
        }
        head=head->next;
        cur=cur->next;
    }
    return nhead;
    }
};