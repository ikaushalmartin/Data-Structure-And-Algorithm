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

void sumreplacement(node* root){
    if(root==NULL){
        return;
    }
 sumreplacement(root->left);
    sumreplacement(root->right);
    if(root->left!=NULL && root->right){
 root->data=root->data+ root->left->data+ root->right->data;
    
    }   
}

void preorder(node* root){
    if(root==NULL){
        return;
    }  
cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);

}

int main(){
    node* root=new node(0);
    root->left=new node(2);
    root->right=new node(3);
    
preorder(root);
    sumreplacement(root);
    preorder(root);
}