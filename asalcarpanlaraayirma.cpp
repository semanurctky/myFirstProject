#include<iostream>
using namespace std;
int main(){
    int n,carpan=2;//2 den başlanır bölmeye
    cout<<"bir sayi gir:";
    cin>>n;
    cout<<"sayinin asal carpanlari:";
    while(n>1){
        while(n%carpan==0){
            cout<<carpan<<" ";
            n/=carpan;//bölümü verir
        }
        ++carpan;
    }
}