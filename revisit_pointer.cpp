#include<iostream>
using namespace std;
int a=5;
int main(){
       int a = 4;
       int *ptr = &a;


       //new operator
       int *arr = new int[3];
       for(int i=0; i<3; i++){
        cout<<"Enter the value of arr["<<i<<"]"<<endl;
        cin>>arr[i];
       }
   // delete arr;//
       for(int j=0;j<3;j++){
        cout<< "The value of arr["<<j<<"] is "<<arr[j]<<endl;
       }
       cout<<""<<ptr<<endl;
       cout<<""<<*ptr<<endl;
        int *p = new int(4);
       cout<<"The value at address p is "<<*p<<"  "<<p<<endl;


       // delete opertor


return 0;
}