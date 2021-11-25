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


	void insertion(node* &head1, node* &head2,int pos){
	 node* temp1=head1;
	 pos--;
	 while(pos--)
	 {
	 	temp1=temp1->next;
	 }
	 
	 node* temp2=head2;
	 while(temp2->next!=NULL){
	 	temp2=temp2->next;
	 }
	 temp2->next=temp1;
	}
	
int length(node* &head){
		int l=1;
	 node* temp=head;
	 while(temp->next!=NULL){
	 	l++;
	 	temp=temp->next;
	 }
	 return l;
	}
	
int findingintersection(node* &head1, node* &head2){
	
	int l1=length(head1);
	int l2=length(head2);
	
	int d=0;
	node* ptr1;
	node* ptr2;
	
	
	if(l1>l2){
		d=l1-l2;
		ptr1=head1;
		ptr2=head2;
		
	}
	else{
		d=l2-l1;
		ptr2=head1;
		ptr1=head2;
	}
	
	while(d){
		ptr1=ptr1->next;
		if(ptr1==NULL){
			return -1;
		}
		d--;
	}
	
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1==ptr2){
			return ptr1->data;
		}
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return -1;
}	
	
	
	
void display(node* &head){
		node* temp=head;
		while(temp!=NULL){
			cout<<temp->data;
			temp=temp->next;
		}
		cout<<endl;
	}

int main()
{
	node* head1=NULL;
		node* head2=NULL;
		insertattail(head1,1);
		insertattail(head1,2);
		insertattail(head1,3);
		insertattail(head1,4);
		insertattail(head1,5);
		insertattail(head1,6);
		insertattail(head2,9);
		insertattail(head2,10);
		
insertion(head1, head2,3);
	display(head1);
		display(head2);
		
		cout<<findingintersection(head1,head2);
		
}


