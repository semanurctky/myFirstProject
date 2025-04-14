#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a num:";
    cin>>x;

    for(int i=1;i<=x;i++){
        for(int j=i;j<x;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}