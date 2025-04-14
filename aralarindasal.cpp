#include<iostream>
using namespace std;
 
void aralarinda_asal(int sayi_1,int sayi_2,bool *sonuc);

int main(){

int x,y;

bool cevap;
cout<<"enter two number:";
cin>>x>>y;

aralarinda_asal(x,y,&cevap);
cout<<(cevap ? "aralarinda asal":"aralarinda asal değil");
return 0;
}

void aralarinda_asal(int sayi_1,int sayi_2,bool *sonuc){
    int kucuk_sayi=sayi_1;
    if(sayi_2<kucuk_sayi)
    kucuk_sayi=sayi_2;

    //sayi_1 ve sayi_2 yi aralarinda asal kabul edelim
    *sonuc=1;

    //kucuk sayiya kadar olan sayilari kalansiz bölme için dene...
    for(int i=2;i<=kucuk_sayi;i++){
        if(sayi_1%i==0 && sayi_2%i==0){
            *sonuc=0;
            return ;
        }
    }
}
