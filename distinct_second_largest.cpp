#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter 5 positive numbers : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    int secondlargest = -1;

    for(int i=1;i<5;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;
    cout<<"Second Largest = "<<secondlargest;

    return 0;
}