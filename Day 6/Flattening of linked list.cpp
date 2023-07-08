Node* mergeTwoLists(Node* n1,Node* n2)
{	if(n1==NULL)
		return n2;
	if(n2==NULL)
		return n1;
	Node* res=new Node(-1);
	Node* temp=res;
	while(n1 && n2)
	{
        if(n1->data<n2->data)
		{temp->child=n1;
		temp=temp->child;
		n1=n1->child;
		}
		else
		{temp->child=n2;
		temp=temp->child;
		n2=n2->child;
		}
	}
	if(n1)temp->child=n1;
	else temp->child=n2;
	return res->child;
}
Node* flattenLinkedList(Node* head) 
{if(head==NULL or head->next==NULL)
return head;
Node* down=head;
Node* right=head->next;
down->next=NULL;
right=flattenLinkedList(right);
Node* ans=mergeTwoLists(down,right);
return ans;
}
