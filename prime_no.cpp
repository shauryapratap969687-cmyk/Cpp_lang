#include<iostream>
using namespace std;
int main(){
    int n,sum=0,i;
    cin>>n;
    for( i=2;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
        else{
            sum=sum;
        }
    }
    if(0==sum){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime number";
    }
}