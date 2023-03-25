#include <iostream>
using namespace std;

/*
                                 SYNTAX
    Class Derived : visibility-mode base1, visibility -mode baase2{
        class body
    };
*/

class Base1
{
protected:
    int base1int;

public:
    void set_baselist(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2ist(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2{
         public: 
           void show(){
               cout<<"The value of Base1 is "<<base1int<<endl;
               cout<<"The value of Base2 is "<<base2int<<endl;
               cout<<"The sum of Base1 and Base2 is "<<(base1int+base2int)<<endl;
           }
};
int main()
{
    Derived kashish;
    kashish.set_baselist(10);
    kashish.set_base2ist(100);
    kashish.show();
    return 0;
}