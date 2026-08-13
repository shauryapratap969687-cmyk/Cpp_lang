#include<iostream>
using namespace std;
int main(){
    int n=10;
    int* ptr=&n;
    cout<<"value of n: "<<*ptr<<endl;
    cout<<"address of n: "<<ptr<<endl;
    cout<<"address of ptr: "<<&ptr<<endl;
    cout<<"address of n: "<<&n<<endl;
    return 0;
}