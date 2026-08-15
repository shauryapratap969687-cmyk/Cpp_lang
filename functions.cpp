#include<iostream>
using namespace std;

int table(int);

int main(){
    int n;
    cin >> n;
    table(n);
    return 0;
}

int table(int a){
    for (int i = 1; i <= 10; i++) {
        cout << a << "X" << i << " = " << a * i << endl;
    }
    return 0;
}