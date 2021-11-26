#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);



    dq.push_back(220);
    
dq.begin();
dq.pop_back();
for(auto i: dq){
        cout<<dq.begin()<<" ";
    }
}