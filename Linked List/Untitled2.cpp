Q1) 
 #include<iostream> 
#include<stdlib.h> 
using namespace std; 
struct node{ 
int data; 
struct node *link; 
}; 
struct node *head,*display; 
void disp(){ 
cout<<"\nLinked List: "; 
if(head!=NULL){ 
display=head; 
while(display->link != NULL){ 
cout<<"["<<display->data<<"|"<<display->link<<"]--> "; display=display->link; 
} 
if(display->link==NULL) 
cout<<"["<<display->data<<"|"<<display->link<<"]-->"; } 
else 
cout<<"[NULL|NULL]-->"; 
} 
void insertInEnd(int n){ 
struct node *current,*temp; 
current=(struct node *)malloc(sizeof(struct node *)); 
if(current == NULL)  
 printf("\nOVERFLOW");  
 else{ 
int value; 
cout<<"Enter the value to insert "; 
cin>>value; 
 current->data=value; 
 if(head==NULL){ 
 current->link=NULL; 
 head=current; 
} 
else{ 
temp=head; 
 while(temp->link != NULL){ 
 if(temp==NULL) 
cout<<"NOT FOUND"; 
temp=temp->link; 
} 
if(temp==NULL) 
cout<<"NOT FOUND"; 
temp->link=current; 
current->link=NULL; 
} 
} 
return; 
} 
void insertInBegining(){ 
struct node *current; 
current=(struct node *)malloc(sizeof(struct node *)); 
int value;
cout<<"Enter the value to insert at the begin "; cin>>value; 
current->data=value; 
current->link=head; 
head=current; 
} 
void insertAtPosn(int n,int value){ 
struct node *current,*temp; 
current=(struct node *)malloc(sizeof(struct node *)); if(n==1){ 
current->data=value; 
current->link=head; 
head=current;} 
else 
if(current == NULL)  
 printf("\nOVERFLOW");  
 else{ 
 current->data=value; 
temp=head; 
 while(temp->link != NULL && n>2){  if(temp==NULL) 
cout<<"NOT FOUND"; 
temp=temp->link; 
n--; 
} 
if(temp==NULL) 
cout<<"NOT FOUND"; 
current->link=temp->link; 
temp->link=current; 
} 
} 
void deleteFromBeg(){ 
struct node *current;  
 if(head == NULL)  
 {  
 printf("\nList is empty\n");  
 }  
 else  
 {  
 current = head;  
 head = current->link;  
 free(current);  
 printf("\nNode deleted from the begining ...\n");   }  
} 
void deleteFromEnd(){ 
 struct node *current,*temp;  
 if(head == NULL)  
 {  
 printf("\nlist is empty");  
 }  
 else if(head -> link == NULL)  
 {  
 head = NULL;  
 free(head);  
 printf("\nOnly node of the list deleted ...\n"); 
 }  
 else  
 {  
 temp = head;  
 while(temp->link != NULL)  
 {  
 current = temp;  
 temp = temp ->link;  
 }  
 current->link = NULL;  
 free(temp);  
 printf("\nDeleted Node from the last ...\n");   }  
} 
void deleteFromRandom(int n){ 
struct node *ptr,*temp; 
if(n!=1){ 
if(head==NULL){ 
cout<<"\nLinked list is empty..\n";return;} 
if(ptr == NULL)  
 printf("\nOVERFLOW");  
 else{ 
temp=head; 
 for(int x=1;x<n;x++){ ptr=temp; 
temp=temp->link; 
} 
cout<<"\ndeleting "<<temp->data; 
if(temp->link==NULL) 
ptr->link=NULL; 
ptr->link=temp->link; 
free(temp); 
} 
} 
else 
deleteFromBeg(); 
} 
void search(int n){ 
int itr=1,posn=-1; 
struct node *temp; 
if(head==NULL){ 
cout<<"\nLinked list is empty..\n";return;} 
int i=1; 
if(temp==NULL) 
cout<<"\nOWERFLOW";  
else{ 
temp=head; 
while(temp!=NULL){ 
//cout<<itr<<" \n"; 
if(temp->data==n){ 
posn=itr; 
} 
itr++; 
temp=temp->link; 
} 
if(posn==-1)
cout<<"Element not found"; 
else{ 
cout<<"Element found at pos'n "<<posn<<""; 
} 
}  
} 
void deleteAll(){ 
struct node *current; 
while(head!=NULL){  
 if(head == NULL)  
 {  
 printf("\nList is empty\n");  
 }  
 else  
 {  
 current = head;  
 head = current->link;  
 free(current);  
 }  
} 
if(head==NULL) 
cout<<"All elements successfully deleted....exiting"; 
} 
int main(){ 
int i=0; 
while(i!=9){ 
cout<<"\nMENU:\n"; 
cout<<"1. Insert an element in the begining\n2. Insert an element in the End\n3. Insert an  element in the specific position"; 
cout<<"\n4. Delete from Begining\n5. Delete from End\n6. Delete from specific position\n7.  Search from Linked List"; 
cout<<"\n8. Display\n9. EXIT\n"; 
cout<<"Enter your choice "; 
cin>>i; 
switch (i) 
{ 
case 1: insertInBegining(); 
disp(); 
break; 
case 2: insertInEnd(i); 
disp(); 
break; 
case 3: cout<<"At which position do you want to insert the element "; 
int q; 
cin>>q; 
cout<<"\nEnter the data for the node "<<q<<" "; 
int value; 
 cin>>value; 
insertAtPosn(q,value); 
disp(); 
break; 
case 4: deleteFromBeg(); 
disp(); 
break; 
case 5: deleteFromEnd(); 
disp();

break; 
case 6: cout<<"At which position do you want to delete the element "; int s; 
cin>>s; 
deleteFromRandom(s); 
disp(); 
break; 
case 7: cout<<"Which data do you want to search "; 
int t; 
cin>>t; 
search(t); 
disp(); 
break;  
case 8: disp(); 
break; 
default: 
break; 
} 
} 
deleteAll(); 
return 0; 
} 
