#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 numbers : ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int largest = arr[0];
    for(int i=0;i<5;i++){
        if(largest<arr[i]){
            largest = arr[i];
        }
    }
    cout<<"Largest = "<<largest;

    cout<<endl;

    int smallest = arr[0];
    for(int i=0;i<5;i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout<<"Smallest = "<<smallest;

    cout<<endl;

    int sum = 0;
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum;

    cout<<endl;

    double avg = (double) sum/5;
    cout<<"Average = "<<avg;
    
    return 0;
}