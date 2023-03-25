#include <iostream>
using namespace std;

/*
Case-1:
Class B : public A{
    //Order of execution of constructor --> A the B
}
Case3:
Class B : public A,public c
{
    //order of execution of constructor --> A,C,B
}
Case3:
class B: public A, Virtual public C{
      //order of execution of constructor --> C,A,B
}
Derived-constructor (arg1,arg2,arg 3...): Base1-constructor(arg1,arg2),Base2-constructor(arg3,arg4){

}base1-constructor(arg1,arg2)
*/

class Base
{
     int data1;

public:
     Base(int i)
     {
          data1 = i;
          cout << "Base Class" << endl;
     }
     void printdata2()
     {
          cout << "The value of data is " << data1 << endl;
     }
};

class base
{
     int data2;

public:
     base(int i)
     {
          data2 = i;
          cout << "Base Class2" << endl;
     }
     void printdata3()
     {
          cout << "The value of data is " << data2 << endl;
     }
};

class Derived : public base, public Base{
      int derived, derived1;
      public:
       Derived(int a, int b, int c, int d) : Base(b), base(c){
            derived = a;
            derived1 = d;
            cout<<"Derived class Constructor called "<<endl;
       }
       void printdata1(){
           cout<<"The value of derived is "<<derived<<endl;
           cout<<"The value of derived1 is "<<derived1<<endl;
       }
};
int main()
{
     Derived harry(1,2,3,4);
     //    harry.printdata2();
     //    harry.printdata3();
        harry.printdata1();
     return 0;
}