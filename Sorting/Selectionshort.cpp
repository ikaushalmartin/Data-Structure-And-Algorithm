#include<iostream>
using namespace std;

int main(){
int n;
cout<<" enter the number of element you want to add"<<endl;
cin>>n;
int arr[n];
cout<<"Enter the unshorted array"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}

cout<<"Shorted Array"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}