#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    } 
    cout<<endl;

    cout<<"Odd numbers : "<<endl;
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"Even numbers : "<<endl;
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }

    return 0;
}