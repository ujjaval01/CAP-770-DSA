#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[] = {1,2,3,4,5,6,4,5,6,8,9,7,4,5,9,2};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    for(i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}