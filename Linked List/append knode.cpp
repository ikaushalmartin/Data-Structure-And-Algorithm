#include<iostream>
using namespace std;

class node{
public:
int data;
node* next;

node(int val){
data = val;
next=NULL;	
}	

};

void linkedlist(node* &head, int val){
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

int length(node* head){
	int l;
	node* temp=head;
	while(temp!=NULL){
		l++;
		temp=temp->next;
	}
	return l;
}


node* appendatknode(node* &head, int k){
	node* newhead;
	node* newtail;
    node* temp=head;
    int l=length(head);
	int count=1;
	
	if(k>l){
		cout<<"VAlue of k shluld be smaller than the length on node"<<endl;
	}
	
    while(temp->next!=NULL){
    	if(count==l-k){
    		newtail=temp;
		}
		
		if(count==l-k+1){
			newhead=temp;
		}
temp=temp->next;
count++;
	}
	newtail->next=NULL;
	temp->next=head;
	return newhead;
}


void display(node* head){
	node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}


int main()
{
	node* head=NULL;
	
	for(int i=1;i<=6;i++){
		linkedlist(head,i);
	}
	display(head);
	
	node* newh= appendatknode(head,2);
	display(newh);
}
