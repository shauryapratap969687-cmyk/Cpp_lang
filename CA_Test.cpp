// //1(palindrome)
// #include<iostream>
// using namespace std;
// int main(){
//     int num,reverse=0,remainder=0,original;
    
//     cin>>num;
//     original=num;
//     while(num!=0){
//         remainder=num%10;
//         reverse=reverse*10+remainder;
//         num=num/10;
//     }
//     if(reverse==original){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not Palindrome";
//     }

// }

// 2(Frequency of number)

#include<iostream>
using namespace std;
int main(){
    int n,t,count=0;
    cin>>n;
    cin>>t;
    while(n!=0){
        if(n%10==t){
            count++;
        }


    }
    cout<<t;
}