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


node* oddeven(node* &head){
 node* odd=head;
 node* even=head->next;
 node* evenstart=even;
 
 while(odd->next!=NULL && even->next!=NULL){
 	odd->next=even->next;
 	odd=odd->next;
 	even->next=odd->next;
 	even=even->next;
 }
 
 odd->next=evenstart;
 if(odd->next!=NULL){
 	even->next=NULL;
 }
 
 return head;
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
	
	int arr[]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		insertattail(head,arr[i]);
	}
	
	display(head);
	
	node* newhead=oddeven(head);
	display(head);
}
