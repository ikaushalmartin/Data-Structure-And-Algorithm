#include<iostream>
#include<stack>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
/*
class node{
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

void pop()
{
    if(front==NULL){
        cout<<"No element"<<endl;
return;   
    }
    node* todelete=front;
    front=front->next;
    delete todelete;
}

int seek(){
    if(front==NULL){
        cout<<"No element"<<endl;
    return -1;    
    }
    return front->data;
}

bool empty(){
    if(front==NULL){
        return true;
    }
    return false;
}
};
*/

class Stack{
    int n;

   queue<int> q1;
   queue<int> q2;
public:    
    stack()
    {
        n=0;
    }

    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }

    void pop()
    {
        q1.pop();
        n--;
    }

    int top(){
return q1.front();
    }

    int size(){
        return n;
    }
};

int main()
{
    Stack st;
    st.push(1);
      st.push(2);
        st.push(3);
          st.push(4);
            st.push(5);

            cout<<st.top()<<endl;

            st.pop();
             st.pop();
              cout<<st.top()<<endl;
}