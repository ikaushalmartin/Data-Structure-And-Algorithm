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

bool isbalanced(node* root, int* height){
    if(root==NULL){
        *height=0;
        return true;
   }

   int lh=0, rh=0;
    if(isbalanced(root->left, &lh)==false){
        return false;
    }
    if(isbalanced(root->right, &rh)==false){
        return false;
    }

    if(abs(lh-rh)<=1){
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

int height=0;
if(isbalanced(root, &height)){
    cout<<"Balanced"<<endl;
}
else{
    cout<<"Unbalanced"<<endl;
}
}