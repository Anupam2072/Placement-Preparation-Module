class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* list=new ListNode();
     ListNode* temp=list;
     int d=0,s;
     while(l1 or l2 or d)
     {   s=0;
        s+=d;
         if(l1!=NULL)
        {s+=l1->val;
         l1=l1->next;   
        }
        if(l2!=NULL)
        {
            s+=l2->val;
            l2=l2->next;
        }
        d=s/10;
         ListNode* n1=new ListNode(s%10);
         temp->next=n1;
         temp=temp->next;
    }   
    return list->next;
    }
};