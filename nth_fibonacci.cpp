#include<iostream>
using namespace std;
int main(){
    int n,t1=0,t2=1,nexterm;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i>1){
            cout<<" ";
        }
        cout<<t1;
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
}