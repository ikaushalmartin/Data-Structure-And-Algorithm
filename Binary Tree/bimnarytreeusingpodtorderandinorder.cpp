#include<iostream>
#include "bits/stdc++.h"

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[], int start, int end, int curr){

    for(int i=start; i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}


node* buildtree(int postorder[], int inorder[], int start, int end){

static int idx=end;
if(start>end){
    return NULL;
}
int val= postorder[idx];
idx--;
node* curr=new node(val);
if(start==end){
    return curr;
}

int pos= search(inorder, start, end, val);

curr->right=buildtree(postorder,inorder, pos+1, end);
curr->left=buildtree(postorder, inorder, start, pos-1);
return curr;

}

void printinorder(struct node* root){
    if(root==NULL){
        return;
    }

    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}


int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};

    node* root= buildtree(postorder, inorder, 0, 4);
    printinorder(root);

}