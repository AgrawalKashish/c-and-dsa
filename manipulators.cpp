#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=3,b=45,c=2345;
    cout<<"The value a without setw: "<<a<<endl;
    cout<<"The value b without setw: "<<b<<endl;
    cout<<"The value c without setw: "<<c<<endl;

       cout<<"The value a with setw: "<<setw(4)<<a<<endl;
       cout<<"The value b with setw: "<<setw(4)<<b<<endl;
       cout<<"The value c with setw: "<<setw(4)<<c<<endl;
    return 0;
}