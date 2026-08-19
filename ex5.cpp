#include<iostream>
using namespace std;
int main(){

    int a;
    int b;
     
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Sum: "<< a+b <<endl;
    cout<<"Difference: "<< a-b <<endl;
    cout<<"Product: "<< a*b <<endl;
    cout<<"Quotient: "<< a/b <<endl;
    cout<<"Remainder: "<< a%b <<endl;

    a += 10;
    b -= 2;

    cout<<"Updated first number = "<<a <<endl;
    cout<<"Updated second number = "<<b <<endl;

    return 0;

}