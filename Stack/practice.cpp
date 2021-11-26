#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
float initial;
int withdraw;
float result;
float x=0.50;
cin>>withdraw;
cin>>initial;

if(withdraw%5==0 && withdraw<initial){
result=(initial-withdraw)-x;    
   
cout<<result;
}
else if(withdraw%5!=0){
	cout << fixed << setprecision(2) << initial;
 
}
else if(initial<withdraw){
	   
    	cout << fixed << setprecision(2) << initial;
 
}
	return 0;
}

