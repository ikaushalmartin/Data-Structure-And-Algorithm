#include<iostream>
using namespace std;

class stack{
	int* arr;
	int top;
	public:
	stack()
	{
	arr=new int[100];
		top=-1;
	} 
	
	void push(int val){
		
		if(top==1001){
			cout<<"Stackoverflow"<<endl;
			return;
		}
		top++;
		arr[top]=val;
	}
	
	void pop(){
		if(top==-1){
			cout<<"Stackunderflow"<<endl;
	     return;
		}
		top--;
	}
	
	int Top()
	{
		if(top==-1){
			cout<<"No element Stackunderflow"<<endl;
	       return -1;
	 	}
		return arr[top];
	}
	bool emplty()
	{
		return top==-1;
	}
};

int main()
{
	stack n;
	n.push(1);
	n.push(2);
	n.push(3);
	n.push(100);
	 
	 cout<<n.Top()<<endl;	
	 n.pop();
	 cout<<n.Top()<<endl;
	 n.pop();

	 cout<<n.Top()<<endl;
	 
	 cout<<n.emplty();
}
