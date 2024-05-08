#include<iostream>
using namespace std;
int main(){
    int fact = 1;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 1;i<=num;i++){
        //fact = fact*i;
        fact*=i;
   }cout<<fact;
}