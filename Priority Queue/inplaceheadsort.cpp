#include<iostream>
using namespace std;

void inplace(int input[], int n){
for(int i=1;i<n;i++){
    int childidx=i;

    while(childidx>0){
        int parentidx=(childidx-1)/2;
        if(input[parentidx]>input[childidx]){
            int temp=input[childidx];
            input[childidx]=input[parentidx];
            input[parentidx]=temp;
        }
        else{
            break;
        }
        childidx=parentidx;
    }
}

int size=n;

while(size>1){
    int temp=input[0];
    input[0]=input[size-1];
    input[size-1]=temp;

    size--;

    int parentidx=0;
    int leftchildidx=(parentidx*2)+1;
    int rightchildidx=(parentidx*2)+2;

    while(leftchildidx<size){
        int minidx=parentidx;

        if(input[minidx]>input[leftchildidx]){
            minidx=leftchildidx;
        }

        if(input[minidx]>input[rightchildidx] && rightchildidx<size)
        {
            minidx=rightchildidx;
        }

        if(parentidx==minidx){
            break;
        }
        int temp=input[minidx];
        input[minidx]=input[parentidx];
        input[parentidx]=temp;

        parentidx=minidx;
        leftchildidx=2*parentidx+1;
        rightchildidx=2*parentidx+2;
    }
}
}


int main(){
    int input[5]={8,4,3,6,1};
inplace(input,5);

for(int i=0;i<5;i++){
    cout<<input[i]<<" ";
}
}