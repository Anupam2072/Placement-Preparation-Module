class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head or !head->next or k==0)return head;
        ListNode* temp=head;
        int n=1;
        while(temp->next)
        {
            temp=temp->next;
            n++;
        }
        if(k%n==0)
        return head;
        temp->next=head;
        k=n-(k%n);
        while(k--)
        temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};