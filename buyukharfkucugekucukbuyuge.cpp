#include<iostream>
#include<cctype>
using namespace std;

int main(){
    char harf;
    cout<<"bir harf gir:";
    cin>>harf;

    if(islower(harf)){
        harf=toupper(harf);
    }else if(isupper(harf)){
        harf=tolower(harf);
    }
    cout<<"donusturulmus harf:"<<harf;
}