#include<iostream>
using namespace std;
int fibonacci(int n);
int main(){
    int n;
    cout<<"enter a number to find fibonacci value:";
    cin>>n;

    cout<<"fibonacci of number:"<<fibonacci(n);
    return 0;
}
int fibonacci(int n){
    if(n<0)
    return -1;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}