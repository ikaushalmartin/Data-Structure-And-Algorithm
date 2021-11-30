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

int height(node* root){
    if(root==NULL){
        return 0;
    }
   int left=height(root->left);
   int right=height(root->right);
 int x=max(left,right);
   return x+1;
}

int diameter(node* root){
    if(root==NULL){
        return 0;
    }

    int leftheight= height(root->left);
    int rightheight= height(root->right);
    int op1= leftheight+rightheight+1;

    int op2 = diameter(root->left);
    int op3= diameter(root->right);

    return max(op1,max(op2,op3));
    
}

int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    cout<<diameter(root)<<endl;
}