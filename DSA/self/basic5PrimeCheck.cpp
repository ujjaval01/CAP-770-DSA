#include<iostream>
using namespace std;
int main(){
    int n;
    int num = 2;
    cout<<"enter: ";
    cin>>n;
    // while(num<=n)
    for(num=1;num<=n;num++){
        if(n%num==0){
            cout<<num<<" ";
        }
    }
    return 0;
}
// this program will print the divisors of a number.
/*
Example :
Enter an integer : 15
The divisors are : 1 2 3 5 7 15
*/