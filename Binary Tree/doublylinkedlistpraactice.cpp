#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertatend(node* &head, int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
   	node* head=new node(1);
		node* sec=new node(2);
		node* third=new node(3);

		head->next=sec;
	sec->prev=head;
		sec->next=third;
	third->prev=sec;
		third->next=NULL;
        display(head);
	 insertatend(head, 4);
		display(head);
}