#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    char cevap;
    int tahmin;
    cout<<"0 ile 100 arasinda bir sayi tuttum"<<endl;
    cout<<"hadi tahmin et:";
    cin>>tahmin;

    srand(time(NULL));
    do{
int rast_num=rand()%100;
while(tahmin!=rast_num){
    if(tahmin<rast_num){
        cout<<tahmin<<" tuttugum sayidan kucuk."<<endl;
    }
    else{
        cout<<tahmin<<" tuttugum sayidan buyuk."<<endl;
    }
    cout<<"tekrar tahmin et:";
    cin>>tahmin;
}
cout<<"buldun tekbrikler!tuttugum sayi "<<rast_num<<" idi."<<endl;
cout<<"yeniden oynamak ister misin?:"<<endl;
cout<<"(evet:e,hayir:h):";
cin>>cevap;
    }while(cevap=='e');
    cout<<"bye bye...";
}






    
