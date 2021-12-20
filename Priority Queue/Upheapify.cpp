#include<iostream>
using namespace std;

class qnode{
    public:
int *val;
int front;
int end;

qnode(){
    val=new int[5];
    front=-1;
    end=-1;
}

void isempty(){
    if(front==-1 && front>end){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
}

void insert(int data){       //Upheapify
    if(end==5){
        cout<<"Queue is full"<<endl;
    }

    end++;
    val[end]=data;
int childidx=end;
int parentidx=(childidx-1)/2;
while(childidx>0){

    if(val[parentidx]>val[childidx]){
        int temp=val[childidx];
        val[childidx]=val[parentidx];
        val[parentidx]=temp;
    }
    else{
        break;
    }
    childidx=parentidx;
}
    
}
int size(){
    return end;
}

int getMin(){
    return val[0];
}

void print(){
    for(int i=0;i<5;i++){
        cout<<val[i]<<" ";
    }
}
};
int main(){
qnode q;
q.insert(10);
q.insert(5);
q.insert(3);
q.insert(20);
q.insert(15);

cout<<q.getMin()<<" ";
q.print();

}

/*
Tree is like this
    3
    /\
   10 5
   /\
 20  15

*/
