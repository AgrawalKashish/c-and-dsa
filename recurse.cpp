#include<iostream>
using namespace std;
int fun(int x){
    if(x==1|| x==2){
       return 1;
    }
    else{
         return fun(x-2)+ fun(x-1);
    }
}
int main(){
 cout<<fun(8);
return 0;
}