#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying base class variable " << var_base << endl;
    }
};
class derivedclass : public baseclass
{
public:
    int var_der;
    void display()
    {
        cout << "Display base class var " << var_base << endl;
        cout << "Display derived class var " << var_der << endl;
    }
};
int main()
{
    baseclass *base_cls_ptr;
    baseclass objb;
    derivedclass objd;
    derivedclass *der_ptr;
    base_cls_ptr = &objd; // pointing to derived class
    //der_ptr = &objb; //not allowed
    base_cls_ptr->var_base = 34;
    base_cls_ptr->display();
    return 0;
}