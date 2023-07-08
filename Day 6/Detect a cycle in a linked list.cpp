class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head or !head->next)
        return false;
        unordered_set<ListNode*> s;
        ListNode* p=head;
        while(p->next!=NULL)
        {if(s.find(p)==s.end())
            {s.insert(p);
                p=p->next;
            }
            else
            return true;
        }
        return false;
    }
};