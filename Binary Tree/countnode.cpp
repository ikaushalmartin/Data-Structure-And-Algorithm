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

int count(node* root){
    if(root==NULL){
        return 0;
    }

    return count(root->left)+count(root->right)+1;
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    cout<<count(root)<<endl;
}