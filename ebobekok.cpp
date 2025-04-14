#include<iostream>
using namespace std;

int ebob(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int ekok(int a,int b){
    return a*b/ebob(a,b);
}

int main(){
    int a,b;
    cout<<"enter two number:";
    cin>>a>>b;

    cout<<"ebob("<<a<<","<<b<<")="<<ebob(a,b)<<endl;
    cout<<"ekok("<<a<<","<<b<<")="<<ekok(a,b);
}