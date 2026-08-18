#include<iostream>
using namespace std;

int linearSearch(int arr[], int sz);

int main(){
    int arr[] = {45, 90, 88, 78, 67, 100, 400};
    int sz = 7;
    cout << "the value and index: " << linearSearch(arr, sz);
}

int linearSearch(int arr[], int sz){
    int ele;
    cout << "Enter element you want to search: ";
    cin >> ele;

    for(int i = 0; i < sz; i++){
        if(arr[i] == ele){
            cout << "\nFound " << arr[i] << " at index " << i << endl;
            return i;      // return the index where found
        }
    }
    return -1;             // not found
}