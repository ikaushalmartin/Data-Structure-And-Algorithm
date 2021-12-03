#include<iostream>
using namespace std;
#define n 20
class stack{
public:
string* arr;
int top;
stack(){
    arr= new string[n];
    top =-1;
}

void push(string x){
    if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
    }
    else{
        top++;
        arr[top]=x;
    }
}

char pop(){
    if(top==-1){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    top--;

}
char topelement(){
    return top;
}

bool empty(){
    if(top==-1){
        return -1;
    }

}
};

int main(){
     stack s;
    string a="hey how are you";
  
   
    for(int i=0; i<=a.length(); i++){
        string word="";
     while(a[i]!=' ' && i<a.length()){
        word=word + a[i];
              i++;
     }
     s.push(word);

     while(!s.empty()){
         cout<<a[s.topelement()]<<" ";
         s.pop();
     }
     
    }
    
}













































































































































































































