class Solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor=head;
        for(int i=0;i<k;i++)
        {
            if(cursor==NULL)return head;
            cursor=cursor->next;
        }
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nxt;
        for(int i=0;i<k;i++)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        head->next=reverseKGroup(curr,k);
        return prev;
        }
};