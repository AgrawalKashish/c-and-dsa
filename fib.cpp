#include<iostream>
using namespace std;
int fib(int x);
int main(){
     int a;
     cin>>a;
     cout<<"Term of fibonacci series at "<<a<<" is "<<fib(a);
return 0;
}
int fib(int x){
    if(x<2){
        return x;
    }
    else{
        return (fib(x-2) + fib(x-1));
    }
}