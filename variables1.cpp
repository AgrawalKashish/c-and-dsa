#include<iostream>
// #include "This.h"---> is  user defined directory and for usage we should  have it
using namespace std;
int main(){
    int a=2, b=3;
    cout<<"Operators in C++"<<endl;
    // arithmetic operators
    cout<<" The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is  "<<a-b<<endl;
    cout<<"The value of a * b is  "<<a*b<<endl;
    cout<<"The value of a / b is  "<<a/b<<endl;
    cout<<"The value of a % b is  "<<a%b<<endl;
    cout<<"The value of a ++  is  "<<a++<<endl;
    cout<<"The value of --a   is  "<<--a<<endl;
    cout<<"The value of a--   is  "<<a--<<endl;
    cout<<"The value of ++a   is  "<<++a;
    // comparison operators
    cout<<" The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is  "<<(a!=b)<<endl;
    cout<<"The value of a >= b is  "<<(a>=b)<<endl;
    cout<<"The value of a <= b is  "<<(a<=b)<<endl;
    cout<<"The value of a < b is  "<<(a<b)<<endl;
     cout<<"The value of a >b is  "<<(a>b)<<endl;
    //  logical operators
     cout<<"The value of a == b is "<<((a==b) && (a<b))<<endl;
     cout<<"The value of a == b is "<<((a==b) || (a<b))<<endl;
    
    return 0;
}