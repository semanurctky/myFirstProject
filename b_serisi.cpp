#include<iostream>
using namespace std;
int b_serisi(int n);
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"sayinin b serisi:"<<b_serisi(n);
    return 0;
}
int b_serisi(int n){
    if(n<0 || n%2!=0)
    return -1;
    if(n==0)
    return 0;
    if(n==2)
    return 1;
    return b_serisi(n-2)+b_serisi(n-4);
}