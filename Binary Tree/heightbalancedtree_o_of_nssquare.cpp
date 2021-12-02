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
        right= NULL;
    }
};

int height(node* root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

bool balanced(node* root){
if(root==NULL){
    return true;
}
  
  if(balanced(root->left) == false){
        return false;
    }
    if(balanced(root->right)==false){
        return false;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);

    if(abs(leftheight-rightheight)<=1){
        return true;
    }
    else{
        return false;
    }

}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->right->right=new node(4);
root->right->right->right=new node(5);
root->right->right->right->right=new node(6);


    if(balanced(root)){
        cout<<"BAlanced Tree"<<endl;
    }
    else{
        cout<<"Unbalanced Tree"<<endl;
    }
}

