#include<iostream>
using namespace std;
void swapReferenceVar(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
     int a=4,b=5;
     swapReferenceVar(a,b);
     cout<<a<<endl;
     cout<<b;
return 0;
}