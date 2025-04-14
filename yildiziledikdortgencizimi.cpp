#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the width of the rectangular:";
    cin>>x;
    cout<<"enter the length of the rectangular:";
    cin>>y;

    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
