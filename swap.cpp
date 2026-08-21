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
        swap(arr[i],arr[5-i]);
    }
    cout<<"Output : ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}