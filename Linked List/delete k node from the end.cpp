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
int length(node* &head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
     l++;
    temp=temp->next;
    }
    return l;
}





void insertathead(node* &head, int val){
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

void display(node* &head){
	node* temp=head;
	while(temp!=NULL){
		
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

node* remove(node* &head, int k){
	
node* temp=head;
int l=length(head);
node* todelete;
int count=1;

while(temp!=NULL){
	
	if(count==l-k){
		todelete=temp->next;
		temp->next=temp->next->next;
		
	}
	
	temp=temp->next;
	count++;
}
return head;
delete todelete;	
}


int main()
{
	node* head=NULL;
	int arr[5]={1,1,1,2,3};
	for(int i=0;i<5;i++){
		insertathead(head,arr[i]);
	}
	display(head);
	node* newnode= remove(head,2);
	display(newnode);
}
