#include<iostream>
using namespace std;
int main(){
    cout<<"enter number: ";
    int num;
    cin>>num;
    for(int i=2;i<=num; i++){
        if(i%2==0){
            cout<<i;
        }
        cout<<" ";
    }
}