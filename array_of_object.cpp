#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public: 
    void setid(void) {
        salary=120;
        cout<<"Enter the ID "<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The ID of employee is "<<id<<endl;
    }
};
int main(){
      Employee Harry,rohan,lavish,shruti;
    //   Harry.setid();
    //   Harry.getid();
    //   rohan.setid();
    //   rohan.getid();
    Employee face[3];
    for(int i=0;i<3;i++){
        face[i].setid();
        face[i].getid();
    }
return 0;
}