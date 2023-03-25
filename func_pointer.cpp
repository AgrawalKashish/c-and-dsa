#include<iostream>
using namespace std;
int add(int m,int n){
    return (m+n);
}
int main(){
   int (*func)(int, int);
   func = add;
   int sum= func(8,9);
   cout<<sum;
return 0;
}