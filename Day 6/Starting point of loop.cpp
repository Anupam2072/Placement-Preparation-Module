class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> m;
        if(!head or !head->next)
        return NULL;
        while(head->next)
        {
            if(m.find(head)!=m.end())
            return head;
            else
            m[head]=0;
            head=head->next;
        }
        return NULL;
    }
};