#include<iostream>
using namespace std;
int main(){
    int ele,pos;
    int arr[10];
    int size;
    cout<<"Size : ";
    cin>>size;
    cout<<"Enter element to be inserted : ";
    cin>>ele;
    cout<<"Enter index : ";
    cin>>pos;
    for(int j=size;j>pos;j--){
        arr[j]=arr[j-1];
    }
    arr[pos]=ele;
    size++;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
     
}