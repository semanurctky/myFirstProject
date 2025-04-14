#include<iostream>
using namespace std;
int maximumNum(int n);
int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;
    cout<<"maximum number:"<<maximumNum(n);
}
int maximumNum(int n){
    int enbuyuk =0;
    int sayi;
    cout<<"enter numbers:";
    for(int i=0;i<n;i++){
        cin>>sayi;
        if(sayi>enbuyuk)
        enbuyuk=sayi;
    }
    return enbuyuk;
}