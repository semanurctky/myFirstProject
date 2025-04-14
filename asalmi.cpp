#include<iostream>
#include<cmath>
using namespace std;
 
bool isPrime(int num)
{
    if(num<2) return false;
    if(num==2) return true;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) return false;
    }return true;
}
int main(){
char ch;
do{

    int number;
    cout<<"enter a num:";
    cin>>number;

    if(isPrime(number))
    cout<<number<<" is a prime number.";
    else 
    cout<<number<<" is not a prime number.";
cout<<endl;
cout<<"do yu want to continue?(e:yes,h:no):";
cin>>ch;


}while(ch=='e');

cout<<"program ending...have a nice day."<<endl;
