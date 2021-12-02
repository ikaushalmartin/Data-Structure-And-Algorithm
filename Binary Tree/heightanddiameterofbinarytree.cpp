#include<iostream>
#include"bits/stdc++.h"

using namespace std;
struct node{
int data;
node* left;
node* right;

node(int val){
    left=NULL;
    right=NULL;
    val=data;

}
};

int height(node* root){

    if(root==NULL){
        return 0;
    }
   int leftn= height(root->left);
   int rightn=   height(root->right);
   
 

    if(leftn>rightn){
        return leftn+1;
    }
    else  {
       return rightn+1;
    }
}

int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);

    cout<<height(root)<<endl;
}