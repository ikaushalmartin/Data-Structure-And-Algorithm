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
node* n=new node(val);
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


node* remove(node* &head){
	
	node* prev=NULL;
	node* cur=head;
	node* todelete;
	while(cur!=NULL){
		cur=cur->next;
	
	
		if(cur->data==cur->next->data){
		
			todelete=cur;
		}
	
		
		return cur;
		delete todelete;
	
}
}

void display(node* &head){
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
	
	int arr[5]={1,1,2,2,3};
	for(int i=0;i<5;i++){
		insertattail(head, arr[i]);
	}
	
	display(head);
	
	node* newhead= remove(head);
	display(newhead);
}
