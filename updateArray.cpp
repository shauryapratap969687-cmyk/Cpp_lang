#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    cout<<"Enter number of elements inside array : ";
    cin>>n;
    cout<<"Enter element inside the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index,ele;
    cout<<"Enter element u want to enter : ";
    cin>>ele;
    cout<<"Enter position : ";
    cin>>index;
    
    cout<<"Elements before update: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"After Updatation : ";
    for(int i=n;i>=index;i--){
        if(i==index){

            arr[i]=ele;
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}