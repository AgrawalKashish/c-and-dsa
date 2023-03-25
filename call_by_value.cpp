#include<iostream>
using namespace std;
int  sum(int a, int b){
    int c =a+b;
    return c;
}
void swapPointer(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}  
int main(){
    int a=4,b=5;
     cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
     swapPointer(&a,&b);
     cout<<"After swaping "<<a<<" and "<<b;
return 0;
}