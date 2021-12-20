#include<iostream>
using namespace std;

class qnode{
int *val;
int first;
int end;
public:
qnode(){
    val=new int[5];
    first=-1;
    end=-1;
}

bool isempty(){
    if(first==-1 && first>end){
        cout<<"Queue is empty"<<endl;
        return true; 
    }
    else{

return false;
    }
}
void insert(int data){
    if(end==5){
        cout<<"Queue Is Full"<<endl;
    }
    end++;
    val[end]=data;
    int childidx=end;
    int parentidx=(childidx-1)/2;
    while(childidx>0){
        if(val[parentidx]>val[childidx]){
            int temp=val[childidx];
            val[childidx] = val[parentidx];
            val[parentidx]=temp;
        }
        else{
            break;
        }
        childidx=parentidx;
    }
}

int removemin(){   //downheapify

if(isempty()){
return 0;
}

int ans=val[0];
val[0]=val[end];
end--;

int parentidx=0;
int leftchildidx=(parentidx*2)+1;
int rightchildidx=(2*parentidx)+2;

while(leftchildidx<end){
    int minidx=parentidx;

if(val[minidx]>val[leftchildidx]){
minidx=leftchildidx;
}

if(rightchildidx<end && val[minidx]>val[rightchildidx]){
    minidx=rightchildidx;
}

if(minidx==parentidx){
    break;
}

int temp=val[minidx];
val[minidx]=val[parentidx];
val[parentidx]=temp;

parentidx=minidx;
leftchildidx=2*parentidx+1;
rightchildidx=2*parentidx+2;
}
return ans;
}

void print(){
    for(int i=0;i<5;i++){
        cout<<val[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
    qnode q;
   q.insert(10);
q.insert(5);
q.insert(3);
q.insert(20);
q.insert(15);


q.print();

q.removemin();
q.print();

}