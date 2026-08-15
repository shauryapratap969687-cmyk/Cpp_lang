#include<iostream>
using namespace std;

int swapPointers(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int x=2,y=4;
    cout<<"value of x is : "<<x<<" value of y is : "<<y;
    swapPointers(&x,&y);
    cout<<"\n";
    cout<<"value of x is : "<<x<<" value of y is : "<<y;

}
