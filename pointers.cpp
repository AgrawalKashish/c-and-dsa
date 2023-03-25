#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;
    int **c=&b;
    cout<<""<<a<<endl;
     cout<<"The address of a is "<<b<<endl;
     cout<<"The address of a is "<<&a<<endl;
     cout<<"The address of c is "<<&b<<endl;
return 0;
}