#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element you want to enter in anm array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
  cin>>arr[i];
    }

    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current &&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }


cout<<"sorted array"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}