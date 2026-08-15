#include<iostream>
using namespace std;
int main(){
    int arr[4];
    int i=0;
    while(true){
        cout<<"enter values to be filled in array";
        cin>>arr[i];
        i++;
        if(i==4){
            break;
        }
    }
    for(int i=0;i<4;i++){
        cout<<arr[i];
    }

    }
    



