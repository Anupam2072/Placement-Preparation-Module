class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        if(!head->next)
        return NULL;
        ListNode* beg=new ListNode();
        beg->next=head;
        ListNode* slow=beg;
        ListNode* fast=beg;
        while(n!=0)
        {fast=fast->next;
        n--;
        }
        while(fast->next)
        {
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return beg->next;
      
    }
};