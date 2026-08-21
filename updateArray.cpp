#include<iostream>
using namespace std;
int main(){
    int arr[20],n;
    cout<<"Enter number of elements inside array : ";
    cin>>n;
    cout<<"Enter elements inside the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index,ele;
    cout<<"Enter element u want to insert : ";
    cin>>ele;
    cout<<"Enter position : ";
    cin>>index;

    cout<<"Elements before update: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Shift elements right, from the last element up to 'index'
    for(int i=n; i>index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = ele;
    n++; // array now has one more element

    cout<<"After insertion : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}