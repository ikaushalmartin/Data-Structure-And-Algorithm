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


node* reverseknode(node* &head,int len, int k){
	node* prev=NULL;
	node* cur=head;
	node* next;
	if(k > len) return head;
	int count =0;
	while(cur!=NULL && count<k){
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
		count++;
	}
	
	if (next!=NULL)
	{
		head->next=reverseknode(next,len-k,k);
	}
	
	return prev;
	
}
int length (node* &head){
        int ans = 0;
        while(head != NULL){
            ans++;
            head = head->next;
        }
        return ans;
    }

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}


int main()
{
node* head=NULL;	
int len = length(head);
insertattail(head, 1);
insertattail(head, 2);
insertattail(head, 3);
insertattail(head, 4);
insertattail(head, 5);
//insertattail(head, 6);

display(head);
int k=3;
cout<<endl;
node* newhead=reverseknode(head,len,k);
display(newhead);

}
