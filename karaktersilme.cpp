
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    string text;
    cout<<"enter a text:";
    getline(cin,text);

    string characters;
    cout<<"enter characters which you want to delete:";
    getline(cin,characters);

    string new_text="";

    for(char c:text){
        if(characters.find(c)==string::npos){
            new_text+=c;
        }
    }
    cout<<"sonuc:"<<new_text;
}*/



#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string text, characters;

    // Kullanıcıdan metin al
    cout << "Bir metin girin: ";
    getline(cin, text);

    // Kullanıcıdan silmek istediği karakterleri al
    cout << "Silmek istediğiniz karakterleri girin: ";
    getline(cin, characters);

    // remove_if ve erase kullanarak karakterleri sil
    text.erase(remove_if(text.begin(), text.end(), [&](char c) {
        return characters.find(c) != string::npos; // Eğer silinecek karakterler arasında varsa, sil
    }), text.end());

    cout << "Sonuç: " << text << endl;
    return 0;
}
