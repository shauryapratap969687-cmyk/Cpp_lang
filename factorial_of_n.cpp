#include<iostream>
int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    std::cout<<"Factorial of "<<n<<" is "<<factorial<<"\n";
    return 0;
}