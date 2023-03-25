#include<iostream>
using namespace std;

class baseclass
{
public:
    int var_base =1;
    virtual void display()
    {
        cout << "1 Displaying base class variable " << var_base << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int var_der=2;
    void display()
    {
        cout << "2 Display base class var " << var_base << endl;
        cout << "Display derived class var " << var_der << endl;
    }
};
int main(){
baseclass *base_cls_ptr;
    baseclass objb;
    derivedclass objd;
    base_cls_ptr = &objd;
    base_cls_ptr->display();
return 0;
}

//runtime polymorphism