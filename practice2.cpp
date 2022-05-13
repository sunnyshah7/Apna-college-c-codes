#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val)
		{
			data=val;
			next=NULL;
		}
};
void insertattail(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL)
	{   head=n;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=n;
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void insertathead(node* & head,int val)
{
	node* n=new node(val);
	n->next=head;
	head=n;
}
bool search(node* head,int key)
{
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==key)
		{
			return true;
			
		}
		temp=temp->next;
	}
	return false;
}
void deletion(node* &head,int val)
{
//	if(head==NULL)
//	{
//		return;
//	}
//	if(head->next==NULL)
//	{
//		delete todelete(head);
//	}
	node* temp=head;
	while(temp->next->data!=val)
	{
		temp=temp->next;
	}
	node* todelete=temp->next;
	temp->next=temp->next->next;
	delete todelete;
}
void deleteathead(node* &head)
{
	node* todelete=head;
	head=head->next;
	delete todelete;
}
node* reverse(node* &head)
{
	node* prevptr=NULL;
	node* currptr=head;
	node* nextptr;
	while(currptr!=NULL)
	{
		nextptr=currptr->next;
		currptr->next;
		prevptr=currptr;
		currptr=nextptr;
	}
}
int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertattail(head,5);
	display(head);
    cout<<"insert at head"<<endl;
	insertathead(head,6);
	display(head);
	int key=4;
	cout<<"key searching "<<endl;
	cout<<search(head,key)<<endl;
	cout<<"deletion"<<endl;
	deletion(head,3);
	display(head);
	cout<<"deletion from head"<<endl;
    deleteathead(head);
	display(head);	
	cout<<"reverse"<<endl;
	node* newnode=reverse(head);
	display(head);
}


















