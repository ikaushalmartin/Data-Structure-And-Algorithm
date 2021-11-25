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

void insertattail(node* &head, int val){
	node* n= new node(val);
	
	if(head==NULL){
		head=n;
		return;
	}
	
	node* temp=head;
	
	while(temp->next!=NULL){
		temp=temp->next;	
	}
	temp->next=n;
}




node* reverlist(node* &head){
	node* prev=NULL;
	node* cur=head;
	node* next;
while(cur!=NULL){
	
	next=cur->next;
	cur->next=prev;
	
	prev=cur;
	cur=next;

}
return prev;	

}  


node* reverserecur(node* &head){
	
	
	if(head==NULL || head->next==NULL){
		return head;
	} 
	
	node* newhead= reverserecur(head->next);
	head->next->next=head;
	head=NULL;
	return newhead;
	
}


void display(node* head)
{
	node* temp=head;
	
	while(temp!=NULL){
		cout<<temp->data<<" ";
		
		temp=temp->next;
	}

cout<<endl;
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
				node* newhead=reverlist(head);
				
					display(newhead);
					
					cout<<"Using recursion"<<endl;
					
node* rever=reverserecur(head);
display(rever);
	
}
