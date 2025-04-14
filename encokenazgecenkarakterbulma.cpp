#include<iostream>
#include<unordered_map>
#include<limits>

using namespace std;

void findMostAndLeastFrequent(const string &str){
    unordered_map<char,int> freq;
    for (char ch:str){
        if(ch != ' ')
        freq[ch]++;
    }
    char mostFrequentChar='\0',leastFrequentChar='\0';
    int maxFreq=numeric_limits<int>::min();
    int minFreq=numeric_limits<int>::max();

    for(const auto &pair:freq){
        if(pair.second>maxFreq){
            maxFreq=pair.second;
            mostFrequentChar=pair.first;
        }
        if(pair.second<minFreq && pair.second>0){
            minFreq=pair.second;
            leastFrequentChar=pair.first;
        }
    }
cout<<"en cok gecen:"<< mostFrequentChar<<"("<<maxFreq<<")"<<endl;
cout<<"en az gecen:"<<leastFrequentChar<<"("<<minFreq<<")"<<endl;
}

int main(){
    string input;
    cout<<"bir metin girin:";
    getline(cin,input);
    findMostAndLeastFrequent(input);
}