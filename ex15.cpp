#include<iostream>
using namespace std;
int main(){

    int arr[5];
    cout<<"Enter 5 numbers : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Array : "<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int mul=1;
    for(int i=0;i<5;i++){
        mul *= arr[i];
    }
    cout<<"Product = "<<mul;

    return 0;
}