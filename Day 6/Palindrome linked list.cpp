class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head or !head->next)
        return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next and fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow)
        {
            if(head->val!=slow->val)
            return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* curr)
    {
        ListNode* prev=NULL;
        ListNode* nxt=NULL;
         while(curr)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
};