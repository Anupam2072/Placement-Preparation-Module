class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c=0,mid,k=0;
        ListNode* h=head;
        while(h!=NULL)
        {
            c++;
            h=h->next;
        }
        mid=c/2+1;
        ListNode* h2=head;
        while(h2!=NULL)
        {k++;
        if(k==mid)
        return h2;
        h2=h2->next;
        }
        return NULL;

    }
};