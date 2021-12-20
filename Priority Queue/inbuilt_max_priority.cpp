#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(4);
     pq.push(16);
    pq.push(8);
    pq.push(9);

cout<<"Size : "<<pq.size()<<endl;
cout<<"Top(Max) : "<<pq.top()<<endl;

while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}

}
