#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[]={1,-22,-44,10,9,55};
    int size=6;
    int smallest=INT_MAX, largest=INT_MIN, index=-1;

    for(int i=0;i<size;i++){
        if(arr[i]<smallest){   // smallest = min(arr[i], smallest)
            smallest=arr[i];
            index=i;           // remember where we found it
        }
    }

    int largestIndex=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){    // largest = max(arr[i], largest)
            largest=arr[i];
            largestIndex=i;
        }
    }

    cout<<"largest : "<<largest<<" at index "<<largestIndex<<endl;
    cout<<"smallest : "<<smallest<<" at index "<<index<<endl;
}