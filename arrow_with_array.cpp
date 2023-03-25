#include<iostream>
using namespace std;

class item{
     int id;
     float price;
     public:
        void setdata(int a, int b){
            id = a;
            price = b;
        }
        void getdata(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
     item *ptr = new item[4];
     item *ptrtemp = ptr;
     int P ,I;
     for(int i=0; i<4;i++){
        cout<<"Id and Price of item "<< i+1<<endl;
        cin>>I>>P;
        ptr->setdata(I,P);
        ptr++;
     }
      for(int j=0; j<4;j++){
        cout<<"Item no: "<< j+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
     }
return 0;
}