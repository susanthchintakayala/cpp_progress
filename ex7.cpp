#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(n>0){
        cout<<"Positive."<<endl;
        if(n%2==0){
            cout<<"Even."<<endl;
        } else{
            cout<<"Odd.";
        }
    } else if(n==0){
        cout<<"Zero";
    } else{
        cout<<"Negative.";
    }

    return 0;
}