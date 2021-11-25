#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
	node(int val){
		data=val;
		next=NULL;
	}
		
};

void display(node* head)
{
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
	temp=temp->next;
	
	}
}


void deletion(node* &head, int val)
{
	node* temp=head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node* todelete=temp->next;
	
	temp->next=temp->next->next;
	delete todelete;
}


void deleteathead(node* &head){
	node* todelete=head;
		
	head=head->next;
	delete todelete;

}

int main()
{
	
		node* head=new node(1);
		node* sec=new node(2);
		node* third=new node(3);
		
	//	head->data=1;
		head->next=sec;
	//	sec->data=2;
		sec->next=third;
	//	third->data=3;
		third->next=NULL;
		
		display(head);
		
		cout<<"Enter the element you want to delete"<<endl;
		int d;
		cin>>d;
		
		deletion(head,d);
		cout<<endl;
		display(head);
		
		deleteathead(head);
		cout<<"delete aat head"<<endl;
			display(head);
		
}
