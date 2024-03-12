#include<iostream>
using namespace std;
int main(){
    // float a = 2/5;
    // int a;
    // a = cin.get();  //enter-0,
    char ch;
    cout<<"enter:";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"lowerCase";
    }else if(ch>=97 && ch<=123) {
        cout<<"upperCase";
    }else if(ch>=48 && ch<=57){
        cout<<"number";
    }else{
        cout<<"specialChar";
    }
}

   