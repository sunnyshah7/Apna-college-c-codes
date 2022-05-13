#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node* prev;
		node(int val)
		{
			data=val;
			next=NULL;
			prev=NULL;
		}
};
void insertathead(node*  &head,int val)
{
	node* n=new node(val);
	n->next=head;
	if(head!=NULL)
	{
	  head->prev=n;
	}
	head=n;
}
void insertattail(node* &head,int val)
{
	if(head==NULL)
	{
		insertathead(head,val);
		return;
	}
   node* n=new node(val);
   node* temp=head;
   while(temp->next!=NULL)
   {
   	temp=temp->next;
	}
	temp->next=n;
	n->prev=temp;	
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
  void deleteathead(node* &head)
  {
  	node* todelete=head;
  	head=head->next;
  	head->prev=NULL;
  	delete todelete;
  }
  void deletion(node* &head,int pos)
  {
  	node* temp=head;
  	int count=1;
  	while(temp!=NULL&& count!=pos)
  	{
  		if(pos==1)
  		{
  			deleteathead(head);
  			return;
		  }
  		temp=temp->next;
  		count++;
	  }
	  temp->prev->next=temp->next;
	  if(temp->next!=NULL)
	  {
	  	temp->next->prev=temp->prev;
	  }
	  delete temp;
  }
int main()
{
	node* head=NULL;
	insertattail(head,1);
	insertattail(head,2);
	insertattail(head,3);
	insertattail(head,4);
	insertattail(head,5);
	insertattail(head,6);
	display(head);
	insertathead(head,7);
	display(head);
	deletion(head,4);
	display(head);
}
