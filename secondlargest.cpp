#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Input : "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int largest;
    int secondlargest;
    if(arr[0]>arr[1])
    {
        largest = arr[0];
        secondlargest = arr[1];
    } else
    {
        largest = arr[1];
        secondlargest = arr[0];
    }
    for(int i=2;i<5;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest = largest;
            largest = arr[i];
        } 
        else if(arr[i]>secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout<<"Output : "<<endl;
    cout<<"Largest : "<<largest<<endl;
    cout<<"Second Largest : "<<secondlargest;

    return 0;
}