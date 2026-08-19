#include<iostream>
#include<string>
using namespace std;

int main(){

    string name;
    int age;
    char grade;
    float cgpa;

    cout<<"Name : ";
    cin>> name;
    cout<<"Age : ";
    cin>> age;
    cout<<"Grade : ";
    cin>> grade;
    cout<<"CGPA : ";
    cin>> cgpa;
    cout<<"Thank You!"<<endl;
    cout<<"Next year your age will be : "<< age+1 <<endl;
    
    age = age+1;
    cout<<"Next year your age will be : "<< age;

    return 0;
    
}