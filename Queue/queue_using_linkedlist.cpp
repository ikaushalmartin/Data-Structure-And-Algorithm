#include<iostream>
using namespace std;

class node{public:
public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class queue{
  node* front;
  node* back;
public:
  queue(){
      front=NULL;
      back=NULL;
  }  
   
   void push(int x){
       node* n=new node(x);

       if(front==NULL){
           front=n;
           back=n;
           return;
       }
       back->next=n;
       back=n;
   }

   void pop(){
       if(front==NULL){
           cout<<"Queue underflow"<<endl;
           return;
       }
       node* todelete=front;
       front=front->next;
       delete todelete;
   }

   void peek(){
       if(front==NULL){
           cout<<"No element"<<endl;
       return;
       }
       cout<<front->data<<endl;
   }

bool empty()
{
   if(front==NULL){
           return true;
       }
       else{
           return false;
       }
}
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
     q.push(3);
    q.push(4);
     q.push(5);
    q.push(6);
q.pop();
    q.peek();
    cout<<q.empty();
}