#include <iostream> 
#include<assert.h>
using namespace std; 
 class X {
  int i;
public:
  X(int ii);
  int f() const;
};

X::X(int ii) : i(ii) {}
int X::f() const { return i; }


int main(void)
{
X x1(10);
  const X x2(20);
  x1.f();
  x2.f();
return(0);
}