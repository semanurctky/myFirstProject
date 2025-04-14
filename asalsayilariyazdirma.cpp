#include<iostream>
using namespace std;

bool asalMi(int x){
    for(int i=2;i<=x/2;i++){
        if(x%i==0)
        return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;

    cout<<"asallar:";
    for(int i=2;i<=n;i++){
        if(asalMi(i))
        cout<<i<<" ";
    }
}