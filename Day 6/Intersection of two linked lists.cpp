class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       map<ListNode*,int> m;
       ListNode* h1=headA;
       ListNode* h2=headB;
       while(h1!=NULL)
       {
           m[h1]=1;
           h1=h1->next;
       }
       while(h2!=NULL)
       {
           if(m[h2]==1)
           return h2;
           h2=h2->next;
       }
       return NULL;
    }
};