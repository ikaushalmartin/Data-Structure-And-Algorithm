#include<iostream>
#include"bits/stdc++.h"

using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void listordertraversal(node* root){
    if(root==NULL){
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* root=q.front();
q.pop();
        if(root!=NULL){
            cout<<root->data<<" ";
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        }
        else if (!q.empty()){
            q.push(NULL);
        }
    }
}

int main()
{
    node* root= new node(1);
        root->left= new node(2);
     root->right= new node(3);
     root->left->left= new node(4);
     root->left->right= new node(5);
 root->right->right=new node(6);
root->right->left=new node(7);

listordertraversal(root);


}