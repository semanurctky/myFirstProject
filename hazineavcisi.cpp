#include<iostream>
using namespace std;
#define MAX 10
int main(){
    int saray[MAX][MAX],n;
    cout<<"sarayin boyutunu gir:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>saray[i][j];
        }
    }
      int satir=1,sutun=1;
      cout<<"hazineye giden yol:";
      while(true){
        int kod=saray[satir-1][sutun-1];
        cout<<kod<<" ";
        int yeni_satir=kod/10;
        int yeni_sutun=kod%10;
        if(satir==yeni_satir &&sutun==yeni_sutun){
            cout<<"\nhazine bulundu!"<<endl;
            break;
        }
        satir=yeni_satir;
        sutun=yeni_sutun;
      }
    }