#include<iostream>
using namespace std;
int a_serisi(int n);
int main(){
    int n;
    cout<<"enter a number to find a seri value:";
    cin>>n;

    cout<<"A seri of number:"<<a_serisi(n);
    return 0;
}
int a_serisi(int n){
     if(n<0)
    return -1;
    if(n==0)
    return 2;
    if(n==1)
    return 3;
    return a_serisi(n-1)*a_serisi(n-2);
}