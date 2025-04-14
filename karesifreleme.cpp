#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main(){
    string plaintext;
    cout<<"metni girin:";
    getline(cin,plaintext);
    int len=plaintext.size();
    int n=ceil(sqrt(len));

    string padded=plaintext;
    padded.append(n*n-len,'x');

    cout<<"\nMatris:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<padded[i*n+j]<<" ";
        }
        cout<<endl;
    }
string ciphertext;
for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        ciphertext.push_back(padded[i*n+j]);
    }
}


cout<<"\nsifreli metin:"<<ciphertext;

}