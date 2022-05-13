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
insertathead(node* &head,int val)
{
	node* n=new node(val);
	n->next=head;
	head=n;
}
void insertattail(node* &head,int val)
{
	node* n=new node(val);
	if(head==NULL)
	{
		head=n;
		return ;
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
	while(temp->next!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
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
		temp->next;
	}
	return false;
}
void deletion(node* &head,int val)
{
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
		currptr->next=prevptr;
		prevptr=currptr;
		currptr=nextptr;
	}
	head=prevptr;}
	node* reversek(node* &head,int k)
	{
		node* prevptr=NULL;
		node* currptr=head;
		node* nextptr;
		int count=0;
		while(currptr!=NULL && count<k)
		{
			nextptr=currptr->next;
			currptr->next=prevptr;
			prevptr=currptr;
			currptr=nextptr;
			count++;
		}
		if(prevptr!=NULL)
		{
			head->next=reversek(nextptr,k);
		}
	}
	
	
bool detectcycle(node* & head)
{
	node* fast=head;
	node* slow=head;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast==slow)
	{
		return true;
	}
	return false;
	}	
	
void makecycle(node* &head,int pos)
{
	node* temp=head;
	node* startnode;
	int count=1;
	while(temp->next!=NULL)
	{
		if(count==pos)
		{
			startnode=temp;
		}
		temp=temp->next;
		count++;
	}
	temp->next=startnode;
	}
	
void removecycle(node* head)
{
	node* slow=head;
	node* fast=head;
	do{
		slow=slow->next;
		fast=fast->next->next;
	}while(slow!=fast);
	fast=head;
	while(slow->next!=fast->next)
	{
		slow=slow->next;
		fast=fast->next;
	}
	slow->next=NULL;
	}	
		
int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertathead(head,5);
	display(head);
//	int key=5;
//	cout<<search(head,key)<<endl;
//	deletion(head,3);
//	deleteathead(head);
//	display(head);
//	node* newhead=reverse(head);
//	display(head);
//	node* newnode=reversek(head,3);
//	display(head);
makecycle(head,3);
removecycle(head);
cout<<detectcycle(head);
}
