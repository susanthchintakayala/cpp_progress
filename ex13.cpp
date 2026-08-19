#include<iostream>
using namespace std;
int main(){

    int n[5] = {10,20,30,40,50};

    cout<<n[0,1,2,3,4] <<endl;

    cout<<n[0];
    cout<<n[1];
    cout<<n[2];
    cout<<n[3];
    cout<<n[4];

    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<n[i]<<" ";
    }

    return 0;
}