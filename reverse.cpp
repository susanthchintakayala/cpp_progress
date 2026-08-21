#include<iostream>
using namespace std;
int main()
{
    int arr[6];
    cout<<"Input : ";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        int temp = arr[i];
        arr[i] = arr[5-i];
        arr[5-i] = temp;
    }
    cout<<"Output : ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}