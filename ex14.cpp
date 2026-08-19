#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
     }

    cout<<"Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    cout<<"Sum = "<<sum;

    return 0;
}