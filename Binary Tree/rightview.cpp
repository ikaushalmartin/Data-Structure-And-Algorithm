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
void rightview(node* root){
if(root==NULL){
    return;
}

cout<<root->data<<" ";
rightview(root->right);

if(root->right==NULL){
    cout<<root->left<<" ";
    rightview(root->left);
}

    
    



}
int main(){
    node* root=new node(1);
    root->left=new node(2);
   // root->right=new node(3);
   // root->right->right=new node(6);
   // root->right->left=new node(5);
  //  root->right->left->left=new node(7);

    rightview(root);
}