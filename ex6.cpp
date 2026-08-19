#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your marks : ";
    cin>> a;

    if(a<40){
        cout<<"You are failed in the exam.";
    } else if(a <=59){
        cout<<"You have passed the exam.";
    } else if(a<=74){
        cout<<"Good you have paased the exam.";
    } else if (a<=89){
        cout<<"Very good you have passed the exam.";
    } else{
        cout<<"Excellent you have passed the exam.";
    }

    return 0;
}