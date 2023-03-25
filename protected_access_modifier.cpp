#include<iostream>
using namespace std;

class Base{
    protected:
     int a;//can be inherited but not public
     public:
      int b;

};
/* 
            private      public       protected
Private  :    no             no           no
public   :  private        public      protected
protected:  private       protected    protected
*/
class Derived: protected Base{

};
int main(){
Base b;
Derived d;
// cout<<d.a;
return 0;
}