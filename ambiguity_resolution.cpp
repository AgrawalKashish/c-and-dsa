#include <iostream>
using namespace std;
class Base1
{
    public: 
      void greet(){
          cout<<"How are you?"<<endl;
      }
};
class Base2
{
     public:
      void greet(){
          cout<<"Kaise ho??"<<endl;
      }
};
class Derived : public Base1, public Base2
{
    int a;
    public: 
      void greet(){
          Base1::greet();
      }
};
class B{
    public:
      void say(){
          cout<<"HELLO, WORLD!!"<<endl;
      }
};
class D{
    int a;
    public:
       void say(){
           cout<<"Beautiful"<<endl;
       }
};
int main()
{
    //ambiguity 1
    // // Base1 base1;
    // // Base2 base2;
    // // base1.greet();
    // // base2.greet();
    // Derived d;
    // d.greet();
    //ambiguity 1


    //ambiguity 2
    B b;
    D d;
    b.say();
    d.say();
    return 0;
}